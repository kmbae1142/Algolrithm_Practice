import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
T = 2 * N + 1
M = int(input())
S = list(input().rstrip())
p = deque()
count = 0

while T > 0:
    if T % 2 == 0:
        p.append('O')
    else:
        p.append('I')
    T -= 1

start = deque(S[0:len(p)])
if start == p:
    count += 1

for i in range(len(p), len(S)):
    start.popleft()
    start.append(S[i])
    if start == p:
        count += 1

print(count)