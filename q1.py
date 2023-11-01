import math

throughput_values = {
    'V1': {'B1': 80, 'B2': 100, 'B3': 120},
    'V2': {'B1': 100, 'B2': 120, 'B3': 70},
    'V3': {'B1': 120, 'B2': 76, 'B3': 100}
}

# Function to calculate relative performance
def calculate_relative_performance(vendor1, vendor2):
    relative_performance = (
        (throughput_values[vendor1]['B1'] / throughput_values[vendor2]['B1']) +
        (throughput_values[vendor1]['B2'] / throughput_values[vendor2]['B2']) +
        (throughput_values[vendor1]['B3'] / throughput_values[vendor2]['B3'])
    ) / 3
    return relative_performance

relative_performance_values = {
    'V1 vs V2': calculate_relative_performance('V1', 'V2'),
    'V1 vs V3': calculate_relative_performance('V1', 'V3'),
    'V2 vs V1': calculate_relative_performance('V2', 'V1'),
    'V2 vs V3': calculate_relative_performance('V2', 'V3'),
    'V3 vs V1': calculate_relative_performance('V3', 'V1'),
    'V3 vs V2': calculate_relative_performance('V3', 'V2'),
}

print("Relative Performance Values:")
for comparison, value in relative_performance_values.items():
    print(f"{comparison}: {value}")
