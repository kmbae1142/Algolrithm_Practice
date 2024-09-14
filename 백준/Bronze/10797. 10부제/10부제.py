import sys
input = sys.stdin.readline

date = int(input())
car_num = [int(i) for i in input().split()]
count = 0

for i in car_num:
    if i == date:
        count += 1

print(count)