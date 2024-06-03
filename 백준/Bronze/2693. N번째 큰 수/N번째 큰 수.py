num = int(input())
for i in range(num):
    number = [int(i) for i in input().split()]
    newint = sorted(number, reverse=True)
    print(newint[2])