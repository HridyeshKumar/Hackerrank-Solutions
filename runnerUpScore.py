#find the runner-up score
n = int(input())
arr = map(int, input().split())
print(sorted(list(set(arr)))[-2])
