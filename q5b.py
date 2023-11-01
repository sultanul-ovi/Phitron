# Written by Ovi
# October 30, 2023
# This code generates a scatter plot for H vs Rate (R) and fits a high-degree polynomial to closely follow the trend.

import matplotlib.pyplot as plt
import numpy as np

# Given data
R = [0.3, 0.4, 0.6, 0.7, 0.9, 1.1, 1.2, 1.4, 1.5, 1.8, 1.9, 2.5]
E = [5.95, 2.93, 1.22, 1.11, 0.8, 0.58, 0.51, 0.46, 0.42, 0.34, 0.3, 0.25]
H = [1 / e for e in E]  # Calculating H as 1/E

# Create scatter plot
plt.figure(figsize=(10, 6))
plt.scatter(R, H, color='green', label='Data points')

# Generate trend line
R_sorted = np.sort(R)
H_trend = np.poly1d(np.polyfit(R, H, 1))(R_sorted)  # Using a linear fit (degree 1)
plt.plot(R_sorted, H_trend, 'r--', label='Trend line')

plt.xlabel('Rate (R) in Khz')
plt.ylabel('H')
plt.title('H vs Rate (R)')
plt.legend()
plt.grid(True)
plt.show()
