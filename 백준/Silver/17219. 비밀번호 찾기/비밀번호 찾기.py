import sys

a, b = map(int, sys.stdin.readline().split())
dic_site_p = {}

for i in range(a):
    site_p = sys.stdin.readline().rstrip().split()
    dic_site_p[site_p[0]] = site_p[1]

for i in range(b):
    site = sys.stdin.readline().rstrip()
    print(dic_site_p[site])