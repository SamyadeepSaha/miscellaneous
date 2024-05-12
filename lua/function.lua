-- Factorial function
function factorial (n)
    if n <= 1 then
        return 1
    else
        return n * factorial(n - 1)
    end
end

function norm (x, y)
    local n2 = x^2 + y^2
    return math.sqrt(n2)
end

print("Enter a number:")
num = io.read("*number")
print(factorial(num))

print(norm(5, 6))
