import queue
import sys

q = queue.Queue()
input = sys.stdin.readline

for _ in range(int(input())):
    com = input().rstrip().split()

    if com[0] == 'push':
        q.put(com[-1])
    elif com[0] == 'pop':
        if q.qsize() == 0:
            print("-1")
        else:
            print(q.get())
    elif com[0] == 'size':
        print(q.qsize())
    elif com[0] == 'empty':
        if q.empty():
            print("1")
        else:
            print("0")
    elif com[0] == 'front':
        if q.empty():
            print("-1")
        else:
            print(q.queue[0])
    elif com[0] == 'back':
        if q.empty():
            print("-1")
        else:
            print(q.queue[-1])