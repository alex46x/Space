def f(x):
    return x**3 - x - 2


a = 1
b = 2
while True:
    c = (a * f(b) - b * f(a)) / (f(b) - f(a))

    if abs(f(c)) < 0.0001:
        break
    if f(a) * f(c) < 0:
        b = c
    else:
        a = c

print("Root is : ", round(c, 6))
