# data_analysis.py

import numpy as np
import matplotlib.pyplot as plt

def generate_data(x_values):
    y_values = 10 + 30*x_values + np.random.normal(loc=0, scale=1, size=len(x_values))
    return y_values

def fit_regression(x_values, y_values):
    slope, intercept = np.polyfit(x_values, y_values, 1)
    return slope, intercept

def calculate_residuals(x_values, y_values, slope, intercept):
    residuals = y_values - (intercept + slope*x_values)
    return residuals

def calculate_mse(residuals):
    mse = np.mean(residuals**2)
    return mse

def calculate_r_squared(y_values, residuals):
    tss = np.sum((y_values - np.mean(y_values))**2)
    rss = np.sum(residuals**2)
    r_squared = 1 - (rss / tss)
    return r_squared

def plot_residuals(x_values, residuals):
    plt.scatter(x_values, residuals)
    plt.axhline(y=0, color='r', linestyle='-')
    plt.xlabel('x')
    plt.ylabel('Residuals')
    plt.title('Residuals Plot')
    plt.show()
