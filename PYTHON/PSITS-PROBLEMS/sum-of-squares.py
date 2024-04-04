n = int(input("Enter a positive integer: "))
s = 0
for i in range(1, n+1):
    s += (i*i)
print(f'The sum of the squares of all positive integers from 1 to {n} is {s}')