name = input("Enter name: ")
bs = float(input("Enter basic salary: "))
da = (30 * bs) / 100
hra = (18 * bs) / 100
pf = (12 * bs) / 100
gs = bs + da + hra
ns = gs - pf
print("Name: ", name)
print("Basic salary: ", bs)
print("DA: ", da)
print("HRA: ", hra)
print("PF: ", pf)
print("Gross salary: ", gs)
print("Net salary: ", ns)
