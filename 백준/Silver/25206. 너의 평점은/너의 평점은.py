import sys
input = sys.stdin.readline
s_dic = {'A+':4.5, 'A0':4.0, 'B+':3.5, 'B0':3.0, 'C+':2.5, 'C0':2.0, 'D+':1.5, 'D0':1.0, 'F':0.0}
s1 = 0
s2 = 0

for _ in range(20):
    sub = input().rstrip().split()
    if sub[-1] != 'P':
        s1 += float(sub[1]) * s_dic[sub[-1]]
        s2 += float(sub[1])

print("%.6f" % (s1 / s2))