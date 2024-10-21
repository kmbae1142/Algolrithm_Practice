sum = 0
for _ in range(int(input())):
    w, h = map(int, input().split())
    if w == 136:
        sum += 1000
    elif w == 142:
        sum += 5000
    elif w == 148:
        sum += 10000
    elif w == 154:
        sum += 50000
print(sum)