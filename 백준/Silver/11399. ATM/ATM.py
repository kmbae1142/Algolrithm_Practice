num = int(input())
time = [int(i) for i in input().split()]
time.sort()
sum = 0

for i in range(num):
    temp = 0
    for j in range(0, i + 1):
        temp += time[j]
    sum += temp

print(sum)