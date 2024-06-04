def pivot(n):

    if n == 1: return 1
    if n == 2: return 1

    fn1 = 1
    fn2 = 1
    fn = 0

    for i in range(n - 2):
        fn = fn1 + fn2
        fn1 = fn2
        fn2 = fn

    return fn

num = int(input())
print(pivot(num))