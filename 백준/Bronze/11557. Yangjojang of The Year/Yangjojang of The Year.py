import sys

num = int(sys.stdin.readline())

for i in range(num):
    dic = {}
    n = int(sys.stdin.readline())
    for j in range(n):
        uni = sys.stdin.readline().rstrip().split()
        dic[uni[0]] = int(uni[-1])
    new_dic = sorted(dic.items(), key=lambda x: x[1])
    print(new_dic[n - 1][0])