def binary_to_decimal(binary_str):
    decimal_value = 0
    binary_length = len(binary_str)
    for i, digit in enumerate(binary_str):
        if digit == '1':
            decimal_value += 2 ** (binary_length - i - 1)
    return decimal_value

# Get user input
binary_str = input("Enter a binary number: ")

# Validate user input
if all(c in '01' for c in binary_str):
    decimal_value = binary_to_decimal(binary_str)
    print(f'The decimal value of {binary_str} is {decimal_value}.')
else:
    print("Invalid input. Please enter a binary number.")

