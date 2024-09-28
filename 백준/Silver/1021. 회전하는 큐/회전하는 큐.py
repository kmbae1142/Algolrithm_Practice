import sys
from collections import deque
input = sys.stdin.readline

N, M = map(int, input().split())
index = list(map(lambda x: int(x), input().split()))
dq = deque(range(1, N + 1))
count = 0
temp = 0

for i in index:
    current_index = i
    temp = dq.index(i)
    while temp != 0:
        if temp <= len(dq) / 2:
            dq.append(dq.popleft())
            temp = dq.index(current_index)
        else:
            dq.appendleft(dq.pop())
            temp = dq.index(current_index)
        count += 1
    dq.popleft()

print(count)