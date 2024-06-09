numlist = []

for i in range(4):
    num = int(input())
    numlist.append(num)

print(sum(numlist) // 60)
print(sum(numlist) - sum(numlist) // 60 * 60)
