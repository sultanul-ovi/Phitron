def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

# Get user input
number = int(input("Enter a number: "))

# Ensure the number is non-negative
if number < 0:
    print("Sorry, factorial does not exist for negative numbers")
else:
    print(f"The factorial of {number} is {factorial(number)}")
