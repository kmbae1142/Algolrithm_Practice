import sys
input = sys.stdin.readline

n, k = map(int, input().split())
temp = [int(i) for i in input().split()]
temp_sum = sum(temp[0:k])
max_sum = temp_sum
i = 1

while i + k <= len(temp):
    temp_sum += temp[i + k - 1] - temp[i - 1]
    if max_sum < temp_sum:
        max_sum = temp_sum
    i += 1

print(max_sum)