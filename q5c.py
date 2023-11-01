# Written by Ovi
# 2023-10-30
# Computes summations, averages, k1, and k0 for a given dataset
import scipy.stats as stats
# Given dataset
rate = [0.3, 0.4, 0.6, 0.7, 0.9, 1.1, 1.2, 1.4, 1.5, 1.8, 1.9, 2.5]
error = [5.95, 2.93, 1.22, 1.11, 0.8, 0.58, 0.51, 0.46, 0.42, 0.34, 0.3, 0.25]

# Compute the summations
sum_rate = sum(rate)
sum_error = sum(error)
sum_rate_squared = sum([r**2 for r in rate])
sum_error_squared = sum([e**2 for e in error])
sum_rate_times_error = sum([rate[i] * error[i] for i in range(len(rate))])

# Compute averages
x_bar = sum_rate / len(rate)
y_bar = sum_error / len(error)

# Print the results
print(f"Summation of Rate (R): {sum_rate}")
print(f"Summation of Errors (E): {sum_error}")
print(f"Summation of Rate^2 (R^2): {sum_rate_squared}")
print(f"Summation of Errors^2 (E^2): {sum_error_squared}")
print(f"Summation of Rate x Errors (RxE): {sum_rate_times_error}")
print(f"Average of Rate (x bar): {x_bar}")
print(f"Average of Error (y bar): {y_bar}")

# Calculate k1 and k0 using the computed values
n = len(rate)
k1 = (sum_rate_times_error - n * x_bar * y_bar) / (sum_rate_squared - n * x_bar**2)
k0 = y_bar - k1 * x_bar

# Print the values for k1 and k0
print(f"k1 = {k1}")
print(f"k0 = {k0}")


# Calculate predicted values
y_hat = [k0 + k1 * r for r in rate]

# Calculate SSE
SSE = sum([(error[i] - y_hat[i])**2 for i in range(n)])

# Calculate SST
SST = sum([(error[i] - y_bar)**2 for i in range(n)])

# Calculate SSR
SSR = SST - SSE

# Calculate R^2
R2 = SSR / SST

# Calculate Se
Se = (SSE / (n - 2))**0.5

# Calculate Sk0 and Sk1
Sk0 = Se * (sum_rate_squared / (n * sum_rate_squared - sum_rate**2))**0.5
Sk1 = Se * (n / (n * sum_rate_squared - sum_rate**2))**0.5

# Print the results
print(f"SSE: {SSE}")
print(f"SST: {SST}")
print(f"SSR: {SSR}")
print(f"R^2: {R2}")
print(f"Se: {Se}")
print(f"Sk0: {Sk0}")
print(f"Sk1: {Sk1}")

# Compute the t value for 95% confidence level and n-2 degrees of freedom
t_value = stats.t.ppf(1 - 0.025, n - 2)

# Compute the confidence intervals for k0 and k1
CI_k0 = (k0 - t_value * Sk0, k0 + t_value * Sk0)
CI_k1 = (k1 - t_value * Sk1, k1 + t_value * Sk1)

print(f"95% Confidence Interval for k0: {CI_k0}")
print(f"95% Confidence Interval for k1: {CI_k1}")

R = 0.55  # Given sampling rate in KHz

# Compute the estimated error for the given sampling rate
estimated_error = k0 + k1 * R

# Compute the value inside the square root for the 95% CI formula
sqrt_value = (1/n) + ((R - x_bar)**2 / sum([(r - x_bar)**2 for r in rate]))

# Assuming a t-value of approximately 2.228 for 95% CI with 10 degrees of freedom
# This value might vary based on the specific t-table used. 
# Users should consult a t-table for the exact critical t-value for their desired confidence level and degrees of freedom.
t_value = 2.228

# Compute the margin of error
margin_of_error = t_value * Se * (sqrt_value**0.5)

# Compute the 95% confidence interval for the estimated error
lower_bound = estimated_error - margin_of_error
upper_bound = estimated_error + margin_of_error

print(f"Estimated Error for R = 0.55 KHz: {estimated_error}")
print(f"95% Confidence Interval for the estimate: ({lower_bound}, {upper_bound})")
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