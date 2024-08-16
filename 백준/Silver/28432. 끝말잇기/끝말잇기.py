import sys
input = sys.stdin.readline

str_list = []
temp = 0
result = []

for i in range(int(input())):
    str_list.append(input().rstrip())
    if str_list[i] == '?':
        temp = i

for _ in range(int(input())):
    m = input().rstrip()
    if temp == 0:
        if len(str_list) == 1:
            result.append(m)
        else:
            if m[-1] == str_list[1][0] and m not in str_list:
                result.append(m)
    elif temp == len(str_list) - 1:
        if m[0] == str_list[len(str_list) - 2][-1] and m not in str_list:
            result.append(m)
    elif m[0] == str_list[temp - 1][-1] and m[-1] == str_list[temp + 1][0] and m not in str_list:
        result.append(m)

print(''.join(map(str, result)))