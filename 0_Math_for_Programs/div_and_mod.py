def division_and_modulus(a, b):
    if b != 0:
        division_result = a // b  # Integer division
        modulus_result = a % b
        return division_result, modulus_result
    else:
        return "Error: Division by zero is not allowed", None

# Get user inputs
try:
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    
    # Call the function
    division_result, modulus_result = division_and_modulus(num1, num2)
    
    if modulus_result is not None:
        print(f"Division Result: {division_result}")
        print(f"Modulus Result: {modulus_result}")
    else:
        print(division_result)  # Prints the error message

except ValueError:
    print("Invalid input. Please enter valid integer values.")

