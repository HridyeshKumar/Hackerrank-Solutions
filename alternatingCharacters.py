#alternating characters
def f(s):
    return sum(1 for c1, c2 in zip(s, s[1:]) if c1 == c2)

t = int(input())
for _ in range(t):
    print(f(input()))
