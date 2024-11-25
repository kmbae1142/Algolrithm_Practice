T = int(input())
tea = list(map(int, input().split()))
count = 0

for i in tea:
    if i == T:
        count += 1

print(count)