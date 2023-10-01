def matrix_addition(matrix1, matrix2):
    result = [[0, 0, 0],
              [0, 0, 0],
              [0, 0, 0]]
    for i in range(len(matrix1)):
        for j in range(len(matrix1[i])):
            result[i][j] = matrix1[i][j] + matrix2[i][j]
    return result

def matrix_subtraction(matrix1, matrix2):
    result = [[0, 0, 0],
              [0, 0, 0],
              [0, 0, 0]]
    for i in range(len(matrix1)):
        for j in range(len(matrix1[i])):
            result[i][j] = matrix1[i][j] - matrix2[i][j]
    return result

def matrix_multiplication(matrix1, matrix2):
    result = [[0, 0, 0],
              [0, 0, 0],
              [0, 0, 0]]
    for i in range(len(matrix1)):
        for j in range(len(matrix2[0])):
            for k in range(len(matrix2)):
                result[i][j] += matrix1[i][k] * matrix2[k][j]
    return result

# Input Matrices
matrix1 = [[2, 3, 4],
           [5, 6, 7],
           [8, 9, 10]]

matrix2 = [[1, 1, 1],
           [2, 2, 2],
           [3, 3, 3]]

# Output the input matrices
print(f"Matrix 1:\n{matrix1[0]}\n{matrix1[1]}\n{matrix1[2]}")
print(f"\nMatrix 2:\n{matrix2[0]}\n{matrix2[1]}\n{matrix2[2]}")

# Matrix Addition
addition_result = matrix_addition(matrix1, matrix2)
print(f"\nMatrix Addition Result:\n{addition_result[0]}\n{addition_result[1]}\n{addition_result[2]}")

# Matrix Subtraction
subtraction_result = matrix_subtraction(matrix1, matrix2)
print(f"\nMatrix Subtraction Result:\n{subtraction_result[0]}\n{subtraction_result[1]}\n{subtraction_result[2]}")

# Matrix Multiplication
multiplication_result = matrix_multiplication(matrix1, matrix2)
print(f"\nMatrix Multiplication Result:\n{multiplication_result[0]}\n{multiplication_result[1]}\n{multiplication_result[2]}")



def get_matrix_input(rows, cols):
    matrix = []
    print(f"Enter the elements of the matrix, row by row (each number separated by a space):")
    for i in range(rows):
        row_str = input(f"Row {i+1}: ")
        row_list = [int(num) for num in row_str.split()]
        if len(row_list) != cols:
            print(f"You must enter exactly {cols} numbers for each row. Please try again.")
            return get_matrix_input(rows, cols)  # Recursive call to get the correct input
        matrix.append(row_list)
    return matrix

# Usage:
# rows = 3
# cols = 3
# matrix1 = get_matrix_input(rows, cols)
# matrix2 = get_matrix_input(rows, cols)

# Uncomment the above lines to get matrix input from user, and then call the matrix operation functions as before.
