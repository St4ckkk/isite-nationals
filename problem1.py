num = int(input("Enter a number: "))

if num %5 == 0:
    print("Number is divisible by 5")
elif num %5 != 0:
    print("Number is not divisible by 5")
else:
    print("Invalid input")