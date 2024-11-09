from collections import deque
import sys

input = sys.stdin.readline

def rotate(dq, n):
    if len(dq) <= n:
        n -= len(dq)
    for _ in range(n):
        dq.append(dq.popleft())


N, K = map(int, input().split())
dq = deque(range(1, N + 1))
result = []
i = 1

while len(dq) > 0:
    if len(dq) > K - 1:
        result.append(dq[K - 1])
        dq.remove(dq[K - 1])
        rotate(dq, K - 1)
    else:
        rotate(dq, i)
        result.append(dq.pop())
        i += 1

print("<" + str((result + list(dq))).strip("[""]") + ">")