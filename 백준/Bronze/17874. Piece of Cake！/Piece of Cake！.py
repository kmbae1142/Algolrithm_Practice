n, h, v = map(int, input().split())

if h < n / 2:
    h = n - h
if v < n / 2:
    v = n - v

print(h * v * 4)