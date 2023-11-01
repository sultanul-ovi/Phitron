# Written by Ovi
# October 30, 2023
# This code generates a scatter plot for Error (E) vs Rate (R) and fits a curve closely to the data points.

import matplotlib.pyplot as plt
import numpy as np
from scipy.optimize import curve_fit

# Data
R = np.array([0.3, 0.4, 0.6, 0.7, 0.9, 1.1, 1.2, 1.4, 1.5, 1.8, 1.9, 2.5])
E = np.array([5.95, 2.93, 1.22, 1.11, 0.8, 0.58, 0.51, 0.46, 0.42, 0.34, 0.3, 0.25])

# Function to fit (Exponential decay)
def func(x, a, b, c):
    return a * np.exp(-b * x) + c

# Curve fitting
params, params_covariance = curve_fit(func, R, E)

# Generate fitted data for plotting
R_fitted = np.linspace(min(R), max(R), 500)
E_fitted = func(R_fitted, params[0], params[1], params[2])

# Scatter plot and curve
plt.figure(figsize=(10, 5))
plt.scatter(R, E, label='Data Points')
plt.plot(R_fitted, E_fitted, 'r--', label='Fitted Curve')
plt.title('Scatter Plot for Error (E) vs Rate (R)')
plt.xlabel('Rate (R) in Khz')
plt.ylabel('Error (E)')
plt.grid(True)
plt.legend()
plt.show()

print(f"Fitted curve: E = {params[0]:.4f} * exp(-{params[1]:.4f} * R) + {params[2]:.4f}")
