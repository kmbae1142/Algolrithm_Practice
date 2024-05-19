xy_list = []
num = int(input())

for i in range(num):
    x, y = map(int, input().split())
    xy_list.append((x, y))

xy_list.sort()

for i in range(num):
    print(xy_list[i][0], xy_list[i][1])