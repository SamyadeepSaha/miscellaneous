f = open("myfile.txt", 'r')

f.seek(20)
position = f.tell()
print('Current position:', position)

content = f.read(10)
print(content)

position = f.tell()
print('Current position:', position)

f.close()
