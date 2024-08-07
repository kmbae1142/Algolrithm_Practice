num = list(map(int, list(input())))

if 0 in num and sum(num) % 3 == 0:
    print(''.join(map(str, sorted(num, reverse=True))))
else:
    print("-1")