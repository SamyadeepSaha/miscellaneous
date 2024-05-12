table = {}
for i = 1, 100 do
    table[i] = i * 2
end
print(table[3])

key = "x"
table[key] = 10
print(table)
print(table[key])
