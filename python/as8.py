name = input('Enter name: ')
eng = int(input('English: '))
phy = int(input('Physics: '))
chem = int(input('Chemistry: '))
math = int(input('Math: '))
cs = int(input('Computer Science: '))
total = eng + phy + chem + math + cs
per = (total / 5)
if per > 80:
    grade = 'Distinction'
elif per >= 60:
    grade = 'First Division'
elif per >= 45:
    grade = 'Second Division'
elif per >= 35:
    grade = 'Pass'
else:
    grade = 'Grade not Awarded'
print('Name: ', name)
print('Total marks: ', total)
print('Percentage marks: ', per)
print('Grade: ', grade)
