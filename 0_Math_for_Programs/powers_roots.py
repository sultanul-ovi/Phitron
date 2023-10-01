import math

def calculate_power(base, exponent):
    return base ** exponent

def calculate_root(number, root):
    return number ** (1/root)

# Get user input
base = float(input("Enter the base number: "))
exponent = float(input("Enter the exponent: "))

# Calculating power
power_result = calculate_power(base, exponent)
print(f"The result of {base} raised to the power of {exponent} is {power_result}")

# Get user input for root calculation
number = float(input("Enter the number: "))
root = float(input("Enter the root (e.g., enter 2 for square root, 3 for cube root, etc.): "))

# Calculating root
root_result = calculate_root(number, root)
print(f"The {root}-th root of {number} is {root_result}")
