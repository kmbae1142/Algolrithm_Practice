n, a, b, c, d = map(int, input().split())
x = y = 0

if n % a != 0:
    x = (n // a + 1) * b
else:
    x = (n // a) * b

if n % c != 0:
    y = (n // c + 1) * d
else:
    y = (n // c) * d

if x >= y:
    print(y)
else:
    print(x)