num = list(input())
num.reverse()

for i in range(len(num)):
    num[i] = int(num[i])

for i in range(len(num)):
    if i == len(num) - 1:
        break
    else:
        if int(num[i]) >= 5:
            num[i + 1] += 1
            num[i] = 0
        else:
            num[i] = 0

for i in range(len(num) - 1, -1, -1):
    print(num[i], end='')