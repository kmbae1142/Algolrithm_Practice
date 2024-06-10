num = int(input())

for i in range(num):
    d, f, p = map(float, input().split())
    total = d * f * p
    print("$%.2f" % total)