# spam = 0
# while spam < 5:
#     print('Hello')
#     spam = spam+1


# name =''
# while name != 'ovi':
#     print('What is your name?' )
#     name = input()

# print('Thank You')

# break and continue

name = ''
while True:
    print('What is your name?')
    name = input()
    if name == 'Ovi':
        break

print('Thank You')

spam = 0
while spam < 5:
    spam = spam + 1
    if spam == 3:
        continue
    print('spam is ' + str(spam))
