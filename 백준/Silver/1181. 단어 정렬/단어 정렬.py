num = int(input())
dic = {}

for i in range(num):
    word = input()
    dic[word] = len(word)

result = sorted(dic.items(), key=lambda x: (x[1], x[0]))

for i in result:
    print(i[0])