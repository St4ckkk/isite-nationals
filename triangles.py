import math
print(math.sqrt(4))




a = float(input('Enter first side: '))
b = float(input('Enter second side: '))
c = float(input('Enter third side: '))

s = (a+b+c) / 2

area = math.sqrt(s*(s-a)*(s-b)*(s-c))
area = round(area, 2)
print('Area of the triangle is: ', area)