# Written by Ovi, 2023-10-11
# This program calculates the standard deviation of a list of 40 numbers.

import math

# Given list of 40 numbers
numbers = [
    9.62752106, 8.902515678, 10.08039653, 10.48496642, 7.859629329,
    8.473491527, 7.391588563, 7.66290029, 8.817339478, 8.157824067,
    10.23165345, 7.66266993, 9.049980816, 8.864851655, 7.931541788,
    6.820216396, 10.26899749, 6.553711978, 7.067368193, 9.52587365
]

# Calculate the mean
mean = sum(numbers) / len(numbers)

# Calculate the variance
variance = sum((x - mean) ** 2 for x in numbers) / (len(numbers) - 1)

# Calculate the standard deviation
std_dev = math.sqrt(variance)

print(f"The standard deviation of the 40 numbers is approximately {std_dev:.6f}")
