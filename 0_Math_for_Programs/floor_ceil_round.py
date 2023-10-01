import math

def perform_floor(value):
    return math.floor(value)

def perform_ceiling(value):
    return math.ceil(value)

def perform_round(value):
    return round(value)

# Get user input
try:
    num = float(input("Enter a number: "))
    
    floor_result = perform_floor(num)
    ceiling_result = perform_ceiling(num)
    round_result = perform_round(num)
    
    print(f"Floor result: {floor_result}")
    print(f"Ceiling result: {ceiling_result}")
    print(f"Round result: {round_result}")
except ValueError:
    print("Invalid input. Please enter a valid number.")

