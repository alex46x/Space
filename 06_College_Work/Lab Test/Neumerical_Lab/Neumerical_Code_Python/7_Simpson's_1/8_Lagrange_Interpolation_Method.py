x = [1, 2, 3]
y = [1, 4, 9]

xp = 2.5
yp = 0

n = len(x)

for i in range(n):
    p = 1

    for j in range(n):
        if i != j:
            p *= (xp - x[j]) / (x[i] - x[j])

    yp += p * y[i]

print("Interpolated Value =", yp)
