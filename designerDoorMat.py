N, M = map(int, input().split())

# Print the top half of the mat
for i in range(1, N, 2):
    print((i * ".|.").center(M, "-"))

# Print the middle row
print("WELCOME".center(M, "-"))

# Print the bottom half of the mat
for i in range(N - 2, -1, -2):
    print((i * ".|.").center(M, "-"))
