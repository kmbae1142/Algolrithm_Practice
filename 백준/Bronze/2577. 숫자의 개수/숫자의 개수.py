n1 = int(input())
n2 = int(input())
n3 = int(input())
num = [0] * 10

re = n1 * n2 * n3
temp_str = str(re)

for i in temp_str:
    num[int(i)] += 1

for i in range(10):
    print(num[i])