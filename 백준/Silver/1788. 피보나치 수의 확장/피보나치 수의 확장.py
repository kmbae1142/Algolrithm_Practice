n = int(input())

if n >= 0:
    fibo_positive = [0] * (n + 1)
    if n > 0:
        fibo_positive[1] = 1
    for i in range(2, n + 1):
        fibo_positive[i] = fibo_positive[i - 1] % 1000000000 + fibo_positive[i - 2] % 1000000000
    if fibo_positive[n] > 0:
        print("1")
    else:
        print("0")
    print(fibo_positive[n] % 1000000000)
else:
    fibo_negative = [0] * ((-n) + 2)
    fibo_negative[1] = 1
    if -n > 1:
        fibo_negative[2] = 1
    for i in range(3, -n + 1):
        fibo_negative[i] = fibo_negative[i - 2] % 1000000000 + fibo_negative[i - 1] % 1000000000
    if -n % 2 == 0:
        print("-1")
    else:
        print("1")

    print(fibo_negative[-n] % 1000000000)