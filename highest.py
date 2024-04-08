x = int(input("Enter value of x: "))
y = int(input("Enter value of y: "))
z = int(input("Enter value of z: "))

if x > y:
    if x > z:
        print("x is the highest")
    elif x == z:
        print("x and z are equal and highest")
    else:
        print("z is the highest")
elif y > z:
    if y == x:
        print("x and y are equal and highest")
    else:
        print("y is the highest")
elif y == z:
    if y == x:
        print("x, y, and z are equal and highest")
    else:
        print("y and z are equal and highest")
else:
    print("z is the highest")
