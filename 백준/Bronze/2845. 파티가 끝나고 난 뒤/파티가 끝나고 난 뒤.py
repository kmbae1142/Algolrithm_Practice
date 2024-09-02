L, P = map(int, input().split())
list = [int(i) for i in input().split()]
for i in list:
    print((i - L * P), end=' ')