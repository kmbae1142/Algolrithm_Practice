numbers = input()
newarr = list(numbers)
finalarr = list(map(int, newarr))

finalarr.sort()
finalarr.sort(reverse = True)

for i in range(len(finalarr)):
    print(finalarr[i], end='')