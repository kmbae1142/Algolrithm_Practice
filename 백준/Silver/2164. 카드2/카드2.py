import sys
from collections import deque
input = sys.stdin.readline
num = int(input())
queue = deque([i for i in range(1, num + 1)])

while len(queue) != 1:
    queue.popleft()
    queue.append(queue[0])
    queue.popleft()


print(*queue)