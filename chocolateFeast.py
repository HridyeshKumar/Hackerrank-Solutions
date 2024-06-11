def chocolates(N, C, M):
    total = int(N/C);
    empty_wrapper = total
    while empty_wrapper >= M:
        temp = int(empty_wrapper/M);
        total = total + temp;
        empty_wrapper = empty_wrapper - (temp*M) + temp;
    return total;
T = int(input())
result = [];
for i in range(T):
    (N, C, M) = map(int, input().split());
    result = result + [chocolates(N,C,M)];
print('\n'.join(map(str, result)))
