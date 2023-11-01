import numpy as np
import scipy.stats as stats

# Data for Algorithm A and B
algorithm_a = np.array([340, 380, 422, 378, 445, 440, 390, 380, 378, 400])
algorithm_b = np.array([337, 375, 415, 380, 439, 434, 393, 373, 381, 402])
difference = algorithm_a - algorithm_b

# Part a: Calculate mean and standard deviation of the differences
mean_diff = np.mean(difference)
std_diff = np.std(difference, ddof=1)  # Using ddof=1 for sample standard deviation
print(f"Part a: Mean difference: {mean_diff:.2f}, Sample Standard Deviation: {std_diff:.5f}")

n = len(difference)

# Part b: 95% Confidence Interval
t_value_95 = stats.t.ppf(0.975, df=n-1)  # t-value for 95% confidence level, 9 degrees of freedom
margin_error_95 = t_value_95 * (std_diff / np.sqrt(n))
ci_lower_95 = mean_diff - margin_error_95
ci_upper_95 = mean_diff + margin_error_95
print(f"\nPart b: 95% Confidence Interval: ({ci_lower_95:.10f}, {ci_upper_95:.10f})\n")

# Part c: Conclusion at 95% Confidence Level
if ci_lower_95 > 0:
    print("Part c: At 95% confidence level, Algorithm A is better.")
elif ci_upper_95 < 0:
    print("Part c: At 95% confidence level, Algorithm B is better.")
else:
    print("Part c: At 95% confidence level, we cannot say one algorithm is better than the other.")

from scipy.stats import t

mean_diff = 2.4
std_diff = 4.376706
n = 10

t_value = mean_diff / (std_diff / np.sqrt(n))
alpha_two_tailed = 2 * (1 - t.cdf(t_value, df=n-1))
alpha_percent = round(alpha_two_tailed * 100, 2)

print(f"The t-value when lower bound is zero: {t_value}")
print(f"The lowest significance level at which one algorithm is better than the other is: {alpha_percent}%")




# Part d: 99% Confidence Interval
t_value_99 = stats.t.ppf(0.995, df=n-1)  # t-value for 99% confidence level, 9 degrees of freedom
margin_error_99 = t_value_99 * (std_diff / np.sqrt(n))
ci_lower_99 = mean_diff - margin_error_99
ci_upper_99 = mean_diff + margin_error_99
print(f"\nPart d: 99% Confidence Interval: ({ci_lower_99:.10f}, {ci_upper_99:.10f})")

if ci_lower_99 > 0:
    print("Part d: At 99% confidence level, Algorithm A is better.")
elif ci_upper_99 < 0:
    print("Part d: At 99% confidence level, Algorithm B is better.")
else:
    print("Part d: At 99% confidence level, we cannot say one algorithm is better than the other.")
