# Written by Ovi
# October 31, 2023
# This program calculates Z-scores for three classifiers to determine their eligibility for adoption based on a 99% confidence level requirement.

import math
from scipy.stats import norm

def calculate_z_score(p, n):
    p0 = 0.9  # The benchmark proportion
    SE = math.sqrt((p0 * (1 - p0)) / n)  # Standard Error
    Z = (p - p0) / SE  # Z-score
    return Z

# Classifier C1
p1 = 4550 / 5000
n1 = 5000
Z1 = calculate_z_score(p1, n1)

# Classifier C2
p2 = 9050 / 10000
n2 = 10000
Z2 = calculate_z_score(p2, n2)

# Classifier C3
p3 = 730 / 800
n3 = 800
Z3 = calculate_z_score(p3, n3)

Z_critical = norm.ppf(0.99)
print(f"The Z-critical value for a 99% confidence level in a one-tailed test is approximately {Z_critical:.7f}.")


# Evaluate classifiers based on Z-score and 99% confidence level
result1 = "Accepted" if Z1 > Z_critical else "Not Accepted"
result2 = "Accepted" if Z2 > Z_critical else "Not Accepted"
result3 = "Accepted" if Z3 > Z_critical else "Not Accepted"

# Print Z-scores and evaluation results
print(f"Classifier C1: Z-score = {Z1:.6f}, {result1}")
print(f"Classifier C2: Z-score = {Z2:.6f}, {result2}")
print(f"Classifier C3: Z-score = {Z3:.6f}, {result3}")
