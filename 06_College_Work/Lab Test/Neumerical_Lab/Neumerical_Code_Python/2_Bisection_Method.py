def f(x):
    return x**3 - x - 2


a = 1
b = 2

while abs(b - a) > 0.0001:
    c = (a + b) / 2

    if f(a) * f(c) < 0:
        b = c
    else:
        a = c

print("Root is : ", round(c, 6))
