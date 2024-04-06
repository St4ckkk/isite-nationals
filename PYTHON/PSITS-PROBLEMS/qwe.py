# Enter your code here. Read input from STDIN. Print output to STDOUT
s = input()

lowercase = ""
uppercase = ""
even_digits = ""
odd_digits = ""

for char in s:
    if char.islower():
        lowercase += char
    elif char.isupper():
        uppercase += char
    elif char.isdigit():
        if int(char) % 2 == 0:
            even_digits += char
        else:
            odd_digits += char

lowercase = ''.join(sorted(lowercase))
uppercase = ''.join(sorted(uppercase))
odd_digits = ''.join(sorted(odd_digits))
even_digits = ''.join(sorted(even_digits))

# Print the sorted strings together
print(lowercase + uppercase + odd_digits + even_digits)

