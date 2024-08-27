weight = float(input('Enter weight: '))
height = float(input('Enter height: '))
bmi = weight / pow(height, 2)
if bmi < 18.5:
    ns = 'Underweight'
elif bmi < 25:
    ns = 'Normal'
elif bmi < 30:
    ns = 'Overweight'
elif bmi >= 30:
    ns = 'Obeses'
print('Nutritional Status: ', ns)
print('BMI: ', bmi)
