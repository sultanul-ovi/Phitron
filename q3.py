# Written by Ovi
# October 31, 2023
# This program calculates the 95% confidence intervals for the mean response times of three processor scheduling algorithms (A, B, C).
# It also determines the lowest and highest mean response times for Algorithms B and C, respectively, to be considered better or worse than Algorithm A with 95% confidence.

from math import sqrt

# Given values
mean_a = 44  # Mean response time for Algorithm A in ms
std_dev = 7.8  # Sample standard deviation for each algorithm in ms
sample_size = 100  # Number of experiments for each algorithm
z_value_95 = 1.96  # Z-value corresponding to a 95% confidence level

# Calculate the standard error
std_error = std_dev / sqrt(sample_size)

# a. Calculate the 95% confidence interval for the mean response time of Algorithm A
lower_bound_a = mean_a - z_value_95 * std_error
upper_bound_a = mean_a + z_value_95 * std_error

print(f"The 95% confidence interval for the mean response time of Algorithm A is [{lower_bound_a:.2f}, {upper_bound_a:.2f}] ms.")

# b. Calculate the lowest possible mean response time for Algorithm B to be considered better than Algorithm A with 95% confidence
highest_mean_b = lower_bound_a - (z_value_95 * std_error)

print(f"The highest possible mean response time for Algorithm B to be considered better than Algorithm A with 95% confidence is {highest_mean_b:.2f} ms.")

# c. Calculate the highest possible mean response time for Algorithm C to be considered worse than Algorithm A with 95% confidence
lowest_mean_c = upper_bound_a + (z_value_95 * std_error)

print(f"The lowest possible mean response time for Algorithm C to be considered worse than Algorithm A with 95% confidence is {lowest_mean_c:.2f} ms.")
