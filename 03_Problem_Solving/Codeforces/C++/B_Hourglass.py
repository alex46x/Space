t = int(input())
for _ in range(t):
    s, k, m = map(int, input().split())
    mod = m % k
    remain = s - mod
    print(max(0, remain))