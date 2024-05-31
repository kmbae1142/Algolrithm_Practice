def GCD(a, b):
    while b != 0:
        [a, b] = [b, a % b]
    return a


num = int(input())
for i in range(num):
    a, b = map(int, input().split())
    print(GCD(a, b) * (a // GCD(a, b)) * (b // GCD(a, b)))