import sys
input = sys.stdin.readline

str = input().rstrip()
zero = str.split('0')
one = str.split('1')

zero_len = len(zero) - zero.count('')
one_len = len(one) - one.count('')

if zero_len > one_len:
    print(one_len)
else:
    print(zero_len)