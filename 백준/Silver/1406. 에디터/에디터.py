import sys
from collections import deque
input = sys.stdin.readline

left = deque(input().rstrip())
right = deque()

for _ in range(int(input())):
    com = input().rstrip().split()

    if com[0] == 'L' and left:
        right.appendleft(left.pop())
    elif com[0] == 'D' and right:
        left.append(right.popleft())
    elif com[0] == 'B' and left:
        left.pop()
    elif com[0] == 'P':
        left.append(com[-1])

result = left + right
print(''.join(result))