a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))
c = int(input("Enter the value of c: "))
d = int(input("Enter the value of d: "))

if a >= b and a >= c and a >= d:
    highest = a
    print("Highest variable: a")
elif b >= a and b >= c and b >= d:
    highest = b
    print("Highest variable: b")
elif c >= a and c >= b and c >= d:
    highest = c
    print("Highest variable: c")
else:
    highest = d
    print("Highest variable: d")


if highest % 2 == 0:
    print(f"{highest} and it is even.")
else:
    print(f"{highest} and it is odd.")

    