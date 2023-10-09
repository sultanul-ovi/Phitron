import mysql.connector
import difflib

con = mysql.connector.connect(
    user = "ardit700_student",
    password = "ardit700_student",
    host = "108.167.140.122",
    database = "ardit700_pm1database"
)
cursor = con.cursor()


def set_of_words():
    cursor.execute(f"""
                    select Expression
                    from Dictionary""")
    return_from_db = cursor.fetchall()      # list of tuple - expression
    words = []
    for x in return_from_db:        # convert to list with expressions only
        words.append(x[0])
    return words


data = set_of_words()       # list of all expression available for other functions


def fetch_word(word):       # looking for meaning for exact expression in database
    cursor.execute(f"""select Definition
                        from Dictionary
                        where Expression = '{word}'""")
    return_from_db = cursor.fetchall()
    meanings = []
    for x in return_from_db:        # convert to list with meanings only
        meanings.append(x[0])
    return meanings


def check_variants(word):       # looking for all words which are similar to user input
    variants_lower = difflib.get_close_matches(
        word, data, n=3, cutoff=0.8)
    variants_capitalize = difflib.get_close_matches(
        word.capitalize(), data, n=3, cutoff=0.8)
    variants_upper = difflib.get_close_matches(
        word.upper(), data, n=3, cutoff=0.8)
    variants = variants_lower + variants_capitalize + variants_upper
    variants = set(variants)        # to avoid duplicates
    variants = list(variants)
    return variants


def translate(word):
    word = word.lower().replace(' ', '', 1)
    similar = check_variants(word)

    if word in data:
        return fetch_word(word)
    elif word.capitalize() in data:
        return fetch_word(word)
    elif word.upper() in data:
        return fetch_word(word)
    elif len(similar) > 0:
        while True:
            decision = input(
                f'Maybe you wanted to say something similar like: {similar} ? Y/N: ').lower()
            if decision == 'y':
                if len(similar) == 1:
                    return fetch_word(similar[0])
                else:
                    selection = input(
                        f'Select word (from 1 to {len(similar)}): ')
                    selection_int = int(selection)
                    if 1 <= selection_int <= len(similar):
                        selected_word = similar[selection_int - 1]
                        return fetch_word(selected_word)
                    else:
                        # 1 > selection_int > len(similar):
                        while selection_int < 1 or selection_int > len(similar):
                            selection_int = int(
                                input(f"Wow, out of range. Try again (from 1 to {len(similar)}): "))
                        selected_word = similar[selection_int - 1]
                        return fetch_word(selected_word)
            elif decision == 'n':
                return 'Word does not exist.'
            else:
                print("I do not understand your input... Try Y or N :)")
    else:
        return 'Word does not exist. Try again:)'

user_selection = True
while user_selection:
    word = input('Enter word (Q to quit): ')
    if word.lower() == 'q':
        print("Bye bye :)")
        break
    else:
        result = translate(word)

        counter = 0
        if type(result) == list:
            print('\n')
            for res in result:
                counter += 1
                print(f'{counter}) {res}')
            print('\n')
        else:
            print(result, '\n')