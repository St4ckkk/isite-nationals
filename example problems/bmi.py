weight = float(input("weight(kg): "))
height = float(input("height(cm): "))

bmi = weight / (height/100) ** 2

if bmi < 18.5:
    category = "Underweight"
elif bmi < 25:
    category = "Normal weight"
elif bmi < 30:
    category = "Overweight"
else:
    category = "Obesity"
    
print(f'Bmi: {bmi:.2f} Category: {category}')