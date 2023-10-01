def is_prime(n):
    if n <= 1:
        return "Neither prime nor composite"
    elif n <= 3:
        return "Prime"
    elif n % 2 == 0 or n % 3 == 0:
        return "Composite"
    i = 5
    while (i * i) <= n:
        if (n % i == 0) or (n % (i + 2) == 0):
            return "Composite"
        i = i + 6
    return "Prime"

# Get user input
try:
    num = int(input("Enter an integer: "))
    result = is_prime(num)
    print(f"The number {num} is {result}.")
except ValueError:
    print("Invalid input. Please enter a valid integer.")

