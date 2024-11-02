h, m = map(int, input().split())

if m - 45 >= 0:
    print(h, m - 45)
else:
    m += 15
    h -= 1
    if h < 0:
        h += 24
    print(h, m)