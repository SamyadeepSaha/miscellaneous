n = int(input('Enter n: '))
s = 0
x = 1
while x <= n:
    p = 1
    y = 1
    while y <= x:
        p = p * y
        y = y + 1
    s = s + p
    x = x + 1
print(s)
