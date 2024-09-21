import sys
input = sys.stdin.readline

def num_dic(num : list) -> dict:
    dic = {}
    for i in num:
        if i in dic:
            dic[i] += 1
        else:
            dic[i] = 1

    return dic


n = int(input())
n_num = [i for i in input().split()]
m = int(input())
m_num = [i for i in input().split()]

result = num_dic(n_num)

for i in m_num:
    try:
        print(result[i], end=' ')
    except KeyError:
        print("0", end=' ')