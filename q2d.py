# Written by Ovi
# October 31, 2023
# This program iteratively updates the values of Algorithm B from 101% to 200%, 
# then calculates the new mean difference, standard deviation, 
# and 99% confidence interval for the difference between Algorithm A and Algorithm B.

import numpy as np
from scipy import stats

# Initial dataset for Algorithm A and Algorithm B
algorithm_a = np.array([340, 380, 422, 378, 445, 440, 390, 380, 378, 400])
algorithm_b = np.array([337, 375, 415, 380, 439, 434, 393, 373, 381, 402])

# Sample size and degrees of freedom
sample_size = len(algorithm_a)
degrees_of_freedom = sample_size - 1

# T-value for 99% confidence interval
t_value = stats.t.ppf(1-0.005, degrees_of_freedom)  # Two-tailed

# Loop over K values from 101 to 200
for K in range(101, 201):
    # Update Algorithm B values by K%
    algorithm_b_updated = algorithm_b * (K / 100.0)
    
    # Calculate the new differences
    new_differences = algorithm_a - algorithm_b_updated
    
    # Calculate new mean difference
    new_mean_diff = np.mean(new_differences)
    
    # Calculate new standard deviation of differences
    new_std_dev = np.std(new_differences, ddof=1)
    
    # Calculate Margin of Error
    margin_of_error = t_value * (new_std_dev / np.sqrt(sample_size))
    
    # Calculate the 99% Confidence Interval
    lower_bound = new_mean_diff - margin_of_error
    upper_bound = new_mean_diff + margin_of_error
    
    print(f"K = {K}%")
    print(f"New Mean Difference: {new_mean_diff}")
    print(f"New Standard Deviation: {new_std_dev}")
    print(f"The 99% confidence interval for the new difference in performance is between {lower_bound} and {upper_bound}.")
    
    # Contextual Explanation
    if lower_bound < 0 and upper_bound < 0:
        print("B Better")
        print("----------------------------------------")
    elif lower_bound > 0 and upper_bound > 0:
        print("A Better")
        print("----------------------------------------")
    else:
        print("No clue")
        print("----------------------------------------")
