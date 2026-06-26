def f(x):
    return x**3 - x - 2


x0 = 1
x1 = 2

while True:
    x2 = x1 - (f(x1) * (x1 - x0)) / f(x1) - f(x0)

    if abs(f(x2)) < 0.0001:
        break
    x0 = x1
    x1 = x2

print("Root is : ", round(x2, 6))
