def decimal_to_binary(decimal_num):
    binary_str = ''
    while decimal_num > 0:
        remainder = decimal_num % 2
        binary_str = str(remainder) + binary_str  # prepend the remainder to the result string
        decimal_num = decimal_num // 2
    return binary_str

# Get user input
try:
    decimal_num = int(input("Enter a decimal number: "))
    if decimal_num >= 0:
        binary_str = decimal_to_binary(decimal_num)
        print(f'The binary representation of {decimal_num} is {binary_str}.')
    else:
        print("Invalid input. Please enter a non-negative decimal number.")
except ValueError:
    print("Invalid input. Please enter a valid decimal number.")

