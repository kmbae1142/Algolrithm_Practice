import sys
input = sys.stdin.readline

n = int(input())
x = list(map(int, input().split()))
re_x = sorted(set(x))  #중복 제거, 정렬
dic = {}
j = 0

for i in re_x:
    dic[i] = j  #딕셔너리에 인덱스 저장
    j += 1

for i in x:
    print(dic[i], end=' ')