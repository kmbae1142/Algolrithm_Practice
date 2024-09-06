a, b = map(int, input().split())
c, d = map(int, input().split())

if a + d >= b + c:
    print(b + c)
else:
    print(a + d)