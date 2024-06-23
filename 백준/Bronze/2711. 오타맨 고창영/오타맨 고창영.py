import sys
num = int(sys.stdin.readline())

for i in range(num):
    n = sys.stdin.readline().rstrip().split()
    str = n[-1]
    print(str[:int(n[0]) - 1] + str[int(n[0]):])