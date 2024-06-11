#Python if else
N = int(input())
if N % 2:
    print("Weird")
elif 2 <= N <= 5:
    print("Not Weird")
elif 6 <= N <= 20:
    print("Weird")
else:
    print("Not Weird")
