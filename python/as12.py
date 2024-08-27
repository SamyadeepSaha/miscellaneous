n = int(input('Enter n: '))
a = 0
b = 1
i = 1
while i <= n:
    print(a)
    b = a + b
    a = b - a
    i = i + 1
