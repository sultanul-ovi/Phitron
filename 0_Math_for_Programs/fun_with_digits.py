def extract_digits(n):
    return [int(digit) for digit in str(abs(n))]

def count_digits(digits):
    return len(digits)

def reverse_integer(n):
    return int(str(n)[::-1])

def sum_digits(digits):
    return sum(digits)

def product_digits(digits):
    product = 1
    for digit in digits:
        product *= digit
    return product

def unique_digits(digits):
    return [digit for digit in set(digits) if digits.count(digit) == 1]

def duplicate_digits(digits):
    return [digit for digit in set(digits) if digits.count(digit) > 1]

def missing_digits(digits):
    all_digits = set(range(10))
    present_digits = set(digits)
    return list(all_digits - present_digits)

def main():
    n = int(input("Enter an integer: "))
    digits = extract_digits(n)
    print(f'Digits: {digits}')
    print(f'Number of Digits: {count_digits(digits)}')
    print(f'Reversed Integer: {reverse_integer(n)}')
    print(f'Sum of Digits: {sum_digits(digits)}')
    print(f'Product of Digits: {product_digits(digits)}')
    print(f'Unique Digits: {unique_digits(digits)}')
    print(f'Duplicate Digits: {duplicate_digits(digits)}')
    print(f'Missing Digits: {missing_digits(digits)}')

if __name__ == '__main__':
    main()


# Enter an integer: 1213677
# Digits: [1, 2, 1, 3, 6, 7, 7]
# Number of Digits: 7
# Reversed Integer: 7763121
# Sum of Digits: 27
# Product of Digits: 1764
# Unique Digits: [2, 3, 6]
# Duplicate Digits: [1, 7]
# Missing Digits: [0, 4, 5, 8, 9]