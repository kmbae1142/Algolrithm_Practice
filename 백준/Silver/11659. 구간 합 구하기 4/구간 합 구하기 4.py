import sys
N, M = map(int, sys.stdin.readline().split())
num = [int(i) for i in sys.stdin.readline().split()]
new_num = [0]
sum = 0

for i in range(N):
    sum += num[i]
    new_num.append(sum)

for k in range(M):
    i, j = map(int, sys.stdin.readline().split())
    print(new_num[j] - new_num[i - 1])