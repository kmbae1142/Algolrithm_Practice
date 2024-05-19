num = int(input())
sum_tips = 0
tips = []

for i in range(num):
    tip = int(input())
    tips.append(tip)

tips.sort()
tips.sort(reverse=True)

for j in range(num):
    if tips[j] - j > 0:
        sum_tips += tips[j] - j

print(sum_tips)
    