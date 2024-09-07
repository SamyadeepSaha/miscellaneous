try:
    #f = open("dummy.txt", "x")
    print(x)
except FileExistsError:
    print("File exist")
except NameError:
    print("x is not defined")
