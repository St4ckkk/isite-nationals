from datetime import datetime

start = input("Enter the first time (hh mm ss AM/PM): ")
f_time = datetime.strptime(start, "%I %M %S %p")

second = input("Enter the second time (hh mm ss AM/PM): ")
s_time = datetime.strptime(second, "%I %M %S %p")

time_difference = abs(f_time - s_time)

total_seconds = time_difference.total_seconds()
seconds = total_seconds % 60
minutes = (total_seconds // 60) % 60
hours = total_seconds // 3600

print(f'Time Difference: {int(hours)} hours, {int(minutes)} minutes, {int(seconds)} seconds')
