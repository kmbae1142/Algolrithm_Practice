import sys
input = sys.stdin.readline
print = sys.stdout.write

n1 = int(input())
n1_set = {i for i in input().split()}
n2 = int(input())
n2_set = [i for i in input().split()]

for i in n2_set:
    if i in n1_set:
        print("1\n")
    else:
        print("0\n")