print("Enter a number")
line = io.read()
num = tonumber(line)

if num == nil then
    error(line.." is not a valid number")
else
    print(num)
end
