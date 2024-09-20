while True:
    try:
        num = int(input())
        i = 1
        j = 0
        while i % num != 0:
            i = i * 10 + 1
            j += 1
        print(j + 1)
    except:
        break