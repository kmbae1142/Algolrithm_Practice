n, m = map(int, input().split())
p_score = [int(i) for i in input().split()]
dic = {}

for i in range(m):
    m_score = [i for i in input().split()]
    sum = 0
    for j in range(1, len(m_score)):
        if m_score[j] == 'O':
            sum += p_score[j - 1]

    dic[int(m_score[0])] = sum

new = sorted(dic.items(), key=lambda x: (x[1], -x[0]))

print(new[m - 1][0], new[m - 1][1])