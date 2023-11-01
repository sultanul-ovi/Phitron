# Written by Ovi
# October 31, 2023
# This program calculates the p-value from given Z-scores for classifiers C1, C2, and C3.

from scipy.stats import norm

z_values = {
    'C1': 2.357023,  
    'C2': 1.666667,  
    'C3': 1.178511  
}

# Calculate p-values from Z-scores
p_values = {}
for classifier, z in z_values.items():
    # Use the survival function (sf) to find the one-tailed p-value
    p_value = norm.sf(z)
    p_values[classifier] = p_value

for classifier, p_value in p_values.items():
    print(f"The p-value for {classifier} is approximately {p_value:.7f}")
