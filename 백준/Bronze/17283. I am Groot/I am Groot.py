import math as m

L = int(input())
R = int(input())

i = 1
sum = 0

while L > 5:
    L = m.floor(L * (R / 100))
    sum += L * pow(2, i)
    i += 1
    if m.floor(L * (R / 100)) <= 5:
        break

print(sum)