import sys
from collections import deque
input = sys.stdin.readline
dq = deque()
result = deque()

def tuple_max(dq : deque) -> tuple:
    max = dq[0]
    for i in dq:
        if i[0] > max[0]:
            max = i
    return max


for _ in range(int(input())):
    n, m = map(int, input().split())
    dq = deque((int(i), j) for i, j in zip(input().rstrip().split(), range(n)))
    result = deque()

    while len(dq) > 0:
        while tuple_max(dq) != dq[0]:
            dq.append(dq.popleft())
        result.append(dq.popleft())

    for i in result:
        if i[1] == m:
            print(result.index(i) + 1)