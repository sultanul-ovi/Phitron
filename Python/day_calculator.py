from datetime import datetime
from dateutil.relativedelta import relativedelta

def calculate_date_difference(start_date, end_date):
    # Convert input strings to datetime objects
    start_date = datetime.strptime(start_date, "%m-%d-%y")
    end_date = datetime.strptime(end_date, "%m-%d-%y")

    # Calculate the difference in days
    delta = end_date - start_date
    days_difference = delta.days

    # Calculate the difference in weeks and extra days
    weeks_difference = days_difference // 7
    extra_days = days_difference % 7

    # Calculate the difference in months and extra days
    rd = relativedelta(end_date, start_date)
    months_difference = rd.years * 12 + rd.months
    extra_days += rd.days

    return days_difference, (weeks_difference, extra_days), (months_difference, extra_days)

# Get user input for start and end dates
start_date_str = input("Enter the start date (MM-DD-YY): ")
end_date_str = input("Enter the end date (MM-DD-YY): ")

# Calculate the date differences
days, weeks_and_extra_days, months_and_extra_days = calculate_date_difference(start_date_str, end_date_str)

# Display the results
print(f"1. Difference in days: {days} days")
print(f"2. Difference in weeks and extra days: {weeks_and_extra_days[0]} weeks and {weeks_and_extra_days[1]} days")
print(f"3. Difference in months and extra days: {months_and_extra_days[0]} months and {months_and_extra_days[1]} days")
