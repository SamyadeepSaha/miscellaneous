f = open("myfile.txt", 'r')

content = f.read(10)
print(content)

position = f.tell()
print('Current position:', position)

f.close()
