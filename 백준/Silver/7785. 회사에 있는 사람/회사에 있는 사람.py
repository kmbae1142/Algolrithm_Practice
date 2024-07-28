import sys
input = sys.stdin.readline
dic = {}

for i in range(int(input())):
    log = input().rstrip().split()
    dic[log[0]] = log[-1]

re_dic = sorted(dic.items(), key=lambda x: x[0], reverse=True)

for i in re_dic:
    if i[1] == "enter":
        print(i[0])