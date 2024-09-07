import sys
input = sys.stdin.readline

dic = {}

n = int(input())
for i in range(n):
    str = input().rstrip().split('.')
    if str[-1] in dic.keys():
        dic[str[-1]] += 1
    else:
        dic[str[-1]] = 1

new_dic = sorted(dic.items(), key=lambda x: x[0])       

for i, j in new_dic:
    print(i, j)