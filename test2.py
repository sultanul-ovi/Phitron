# Written by Ovi
# 2023-10-31
# Computes the estimated error, its 95% confidence interval for a given sampling rate, its inverse confidence interval, and prints the standard deviation value

import math

# Given values
k0 = 3.263396031061262
k1 = -1.6986540120793803
R = 0.55  # Sampling rate in KHz
n = 12  # Number of data points
x_bar = 1.1916666666666667  # Mean of rate values
Se = 1.2743583189620773  # Standard error of the regression
sum_x_squared = 21.869999999999997  # Summation of Rate^2 (R^2)

# Predicted error for R = 0.55 KHz
predicted_error = k0 + k1 * R

# t-value for 95% confidence level and 10 degrees of freedom
# This value should be looked up in a t-table. For this demonstration, I'll use a common value for 95% and df=10. Verify this value for accurate results.
t_value = 2.228

# Compute the standard deviation for the given R value
standard_deviation = Se * math.sqrt((1/n) + ((R - x_bar)**2 / (sum_x_squared - n*x_bar**2)))

# Compute the confidence interval
margin_of_error = t_value * standard_deviation
confidence_interval = (predicted_error - margin_of_error, predicted_error + margin_of_error)

# Compute the inverse of the confidence interval for error
inverse_confidence_interval = (1/confidence_interval[1], 1/confidence_interval[0])

print(f"Estimated Error for R = 0.55 KHz: {predicted_error}")
print(f"Standard Deviation for R = 0.55 KHz: {standard_deviation}")
print(f"95% Confidence Interval for the estimate: {confidence_interval}")
print(f"Interval for E (inverse of the confidence interval): {inverse_confidence_interval}")
