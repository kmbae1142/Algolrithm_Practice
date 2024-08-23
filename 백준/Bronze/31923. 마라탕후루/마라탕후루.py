N, A, B = map(int, input().split())
A_i = [int(i) for i in input().split()]
B_i = [int(i) for i in input().split()]
temp = []
i = 0
k = 0
count = 0

if N != 1:
    for i, j in zip(A_i, B_i):
        for k in range(0, 10000):
            if i + A*k == j + B*k:
                temp.append(k)
                break
        if k == 9999:
            print("NO")
            count = 1
            break

    if count != 1:
        print("YES")
        for i in temp:
            print(i, end=' ')

else:
    if A_i == B_i:
        print("YES")
        print("0")
    else:
        for i, j in zip(A_i, B_i):
            for k in range(0, 10000):
                if i + A * k == j + B * k:
                    temp.append(k)
                    break
            if k == 9999:
                print("NO")
                count = 1
        if count != 1:
            print("YES")