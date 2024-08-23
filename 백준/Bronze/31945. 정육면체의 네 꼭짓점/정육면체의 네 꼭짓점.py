l1 = [0, 1, 4, 5]
l2 = [0, 1, 2, 3]
l3 = [0, 2, 4, 6]
l4 = [1, 3, 5, 7]
l5 = [2, 3, 6, 7]
l6 = [4, 5, 6, 7]

num = int(input())
for i in range(num):
    l = [int(i) for i in input().split()]
    l.sort()
    if l == l1 or l == l2 or l == l3 or l == l4 or l == l5 or l == l6:
        print("YES")
    else:
        print("NO")