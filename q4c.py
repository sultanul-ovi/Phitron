# Written by Ovi
# October 31, 2023
# This program calculates Z-scores for three classifiers to determine their eligibility for adoption based on varying confidence levels from 75% to 99%.

import scipy.stats as stats
import math

# Function to calculate Z-score
def calculate_z_score(p, n):
    p0 = 0.9  # The benchmark proportion
    SE = math.sqrt((p0 * (1 - p0)) / n)  # Standard Error
    Z = (p - p0) / SE  # Z-score
    return Z

# Classifier data
classifiers = {
    'C1': {'p': 4550 / 5000, 'n': 5000},
    'C2': {'p': 9050 / 10000, 'n': 10000},
    'C3': {'p': 730 / 800, 'n': 800}
}

# Loop through confidence levels from 75% to 99%
for confidence in range(75, 100):
    alpha = 1 - (confidence / 100)
    Z_critical = stats.norm.ppf(1 - alpha)  # Z-value for the given confidence level (one-tailed)

    print(f"\nFor {confidence}% confidence level, Z-critical = {Z_critical:.6f}")

    # Evaluate classifiers based on Z-score and given confidence level
    for classifier, data in classifiers.items():
        Z = calculate_z_score(data['p'], data['n'])
        result = "Accepted" if Z > Z_critical else "Not Accepted"
        print(f"{classifier}: Z-score = {Z:.6f}, {result}")
