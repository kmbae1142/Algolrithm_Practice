def triangles(n):
    for i in range(1, n+1):
        for j in range(1, i+1):
            print("*", end='')
        print()


while True:
    n = int(input())
    if n == 0:
        break
    triangles(n)