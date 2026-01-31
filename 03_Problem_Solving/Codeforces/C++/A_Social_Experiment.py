t = int(input())
for _ in range(t):
    n = int(input())
    r = n % 3
    if r == 0:
        print(0)
    elif r == 1:
        print(1)
    else:  
        print(2 if n == 2 else 1)