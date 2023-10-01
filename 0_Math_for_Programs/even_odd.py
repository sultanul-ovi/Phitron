def check_even_odd(n):
    if n % 2 == 0:
        return "EVEN"
    else:
        return "ODD"

# Get user input
try:
    num = int(input("Enter an integer: "))
    result = check_even_odd(num)
    print(f"The number {num} is {result}.")
except ValueError:
    print("Invalid input. Please enter a valid integer.")
