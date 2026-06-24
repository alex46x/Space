def f(x):
    return x**3 - x - 2


def df(x):
    return 3 * x**2 - 1


x0 = float(input("Enter initial guess : "))

while True:
    x1 = x0 - f(x0) / df(x0)

    if abs(x1 - x0) < 0.0001:
        break
    x0 = x1

print("Root is : ", round(x1, 6))
