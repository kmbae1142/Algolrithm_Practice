num = int(input())
count = 0

for i in range(num):
    str = input()

    if str == "Never gonna give you up":
        continue
    elif str == "Never gonna let you down":
        continue
    elif str == "Never gonna run around and desert you":
        continue
    elif str == "Never gonna make you cry":
        continue
    elif str == "Never gonna say goodbye":
        continue
    elif str == "Never gonna tell a lie and hurt you":
        continue
    elif str == "Never gonna stop":
        continue
    else:
        count += 1

if count == 0:
    print("No")
else:
    print("Yes")