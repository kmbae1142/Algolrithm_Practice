def pivo(n):

    if n == 0: return 0
    if n == 1: return 1

    fn1 = 0
    fn2 = 1
    fn = 0

    for i in range(n - 1):
        fn = fn1 + fn2
        fn1 = fn2
        fn2 = fn

    return fn


num = int(input())

print(pivo(num))