def plusMinus(arr):
    positive, negative, zeroes = 0, 0, 0
    for i in arr:
        if i > 0:
            positive += 1
        elif i < 0:
            negative += 1
        else:
            zeroes += 1
    print("%.6f" % (positive / len(arr)))
    print("%.6f" % (negative / len(arr)))
    print("%.6f" % (zeroes / len(arr)))
n = int(input())
arr = list(map(int, input().rstrip().split()))
plusMinus(arr)
