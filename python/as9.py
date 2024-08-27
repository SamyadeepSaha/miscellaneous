cname = input('Enter name: ')
cnum = input('Enter Consumer number: ')
month = input('Enter month: ')
units = int(input('Enter units: '))
bill = 250
if units <= 100:
    bill = bill + (units * 5)
elif units <= 300:
    bill = bill + (units * 7) - (100 * 2)
elif units <= 500:
    bill = bill + (units * 9) - (100 * 4) - (200 * 2)
elif units > 500:
    bill = bill + (units * 10)
print('Name: ', cname)
print('Consumer number: ', cnum)
print('Months: ', month)
print('Units: ', units)
print('Bill: ', bill)
