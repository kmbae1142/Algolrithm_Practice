from collections import deque
import sys

input = sys.stdin.readline
dq = deque()

for _ in range(int(input())):
    com = input().rstrip().split()

    if com[0] == '1':
        dq.append(com[-1])
    elif com[0] == '2':
        if len(dq) == 0:
            print("-1")
        else:
            print(dq.pop())
    elif com[0] == '3':
        print(len(dq))
    elif com[0] == '4':
        if len(dq) == 0:
            print("1")
        else:
            print("0")
    elif com[0] == '5':
        if len(dq) == 0:
            print("-1")
        else:
            print(dq[-1])