while True:
    i = 0
    count = 0
    num = input()
    if num == '0':
        break
    else:
        for i in range(len(num) // 2):
            if num[i] == num[len(num) - i - 1]:
                continue
            else:
                print("no")
                count += 1
                break
        if count == 0:
            print("yes")