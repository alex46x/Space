# n = 3
# a = []


# print("Enter the Matrix : ")


# for i in range(n):
#     row = list(map(float, input().split()))
#     a.append(row)

# for i in range(n):
#     pivot = a[i][i]

#     for j in range(n + 1):
#         a[i][j] /= pivot

#     for k in range(n):
#         if k != 1:
#             factor = a[k][i]

#             for j in range(n + 1):
#                 a[k][j] -= factor * a[i][j]


# print("\n Solution is : ")

# for i in range(n):
#     print(f"x{i+1} = {a[i][n]}")


# # print("\nMatrix:")

# # for i in range(n):
# #     for j in range(n + 1):
# #         print(a[i][j], end="\t")
# #     print()


n = 3

a = []

print("Enter augmented matrix:")

for i in range(n):
    row = list(map(float, input().split()))
    a.append(row)

for i in range(n):
    pivot = a[i][i]

    for j in range(n + 1):
        a[i][j] /= pivot

    for k in range(n):
        if k != i:
            factor = a[k][i]

            for j in range(n + 1):
                a[k][j] -= factor * a[i][j]

print("\nSolution:")

for i in range(n):
    print(f"x{i+1} = {a[i][n]}")
