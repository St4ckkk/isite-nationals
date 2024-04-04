n = int(input("Enter binary number: "))
dec = 0
binary_str = str(n)
for i in range(len(binary_str)):
    digit = int(binary_str[i])
    dec = dec * 2 + digit
    
print(f'Decimal equivalent: {dec}')