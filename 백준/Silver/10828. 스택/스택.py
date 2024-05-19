import sys
queue = []
num = int(input())

for i in range(num):
    command = sys.stdin.readline().split()
    if 'pop' in command:
        if len(queue) == 0:
            print("-1")
        else:
            print(queue.pop(-1))

    elif 'size' in command:
        print(len(queue))

    elif 'empty' in command:
        if len(queue) == 0:
            print("1")
        else:
            print("0")

    elif 'top' in command:
        if len(queue) == 0:
            print("-1")
        else:
            print(queue[-1])
    else:
        queue.append(command[-1])