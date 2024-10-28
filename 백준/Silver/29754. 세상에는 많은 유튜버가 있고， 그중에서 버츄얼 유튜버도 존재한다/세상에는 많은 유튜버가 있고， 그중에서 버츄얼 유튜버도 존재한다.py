import sys
input = sys.stdin.readline

n, d = map(int, input().split())
virtual_youtuber_info = [dict() for _ in range(d // 7)]  # 0: 일, 1: 시간

for _ in range(n):
    info = list(map(str, input().rstrip().split()))
    start = list(map(int, info[2].split(':')))
    end = list(map(int, info[3].split(':')))
    week = (int(info[1]) - 1) // 7

    h = end[0] - start[0]
    m = end[1] - start[1]

    if m < 0:
        h -= 1
        m += 60

    total_time = h * 60 + m

    if info[0] in virtual_youtuber_info[week]:
        virtual_youtuber_info[week][info[0]][0] += 1
        virtual_youtuber_info[week][info[0]][1] += total_time
    else:
        virtual_youtuber_info[week][info[0]] = [1, total_time]

real_virtual_youtuber = set()
fail_youtuber = set()
first_week = list(virtual_youtuber_info[0].keys())
for week_data in virtual_youtuber_info:
    for youtuber, (days, minutes) in week_data.items():
        if (days >= 5 and minutes >= 3600) and (youtuber not in fail_youtuber):
            real_virtual_youtuber.add(youtuber)
        else:
            fail_youtuber.add(youtuber)
            if youtuber in real_virtual_youtuber:
                real_virtual_youtuber.remove(youtuber)
    temp = list(real_virtual_youtuber)
    for i in temp:
        if i not in first_week or i not in week_data.keys():
            real_virtual_youtuber.remove(i)
            fail_youtuber.add(i)

real_virtual_youtuber = sorted(list(real_virtual_youtuber))
if not real_virtual_youtuber:
    print(-1)
else:
    print("\n".join(real_virtual_youtuber))