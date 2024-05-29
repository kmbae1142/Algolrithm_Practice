a, b, c = map(int, input().split())
num = [a, b, c]

min_num = min(num)
max_num = max(num)

num.remove(min_num)
num.remove(max_num)

print(min_num,num[0],max_num)