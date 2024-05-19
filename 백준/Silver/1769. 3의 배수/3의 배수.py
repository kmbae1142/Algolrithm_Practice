n = input()
num = list(n)
sum_ = 0
count = 0

if len(num) == 1:
    sum_ = int(n)
    count = -1
else:
    while True:
        for i in range(len(num)):
            sum_ += int(num[i])
        if sum_ < 10:
            break
        else:
            num = list(str(sum_))
            sum_ = 0
            count += 1

if sum_ % 3 != 0:
    print(count + 1)
    print("NO")
else:
    print(count + 1)
    print("YES")