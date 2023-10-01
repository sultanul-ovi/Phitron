def sum_of_n_odd_numbers(n):
    sum_odd = n * n  # Sum of first n odd numbers formula: n^2
    return sum_odd

def sum_of_n_even_numbers(n):
    sum_even = n * (n + 1)  # Sum of first n even numbers formula: n(n + 1)
    return sum_even

def main():
    n = int(input("Enter the value of n: "))
    
    sum_odd = sum_of_n_odd_numbers(n)
    sum_even = sum_of_n_even_numbers(n)
    
    print(f'The sum of the first {n} odd numbers is: {sum_odd}')
    print(f'The sum of the first {n} even numbers is: {sum_even}')

if __name__ == '__main__':
    main()
