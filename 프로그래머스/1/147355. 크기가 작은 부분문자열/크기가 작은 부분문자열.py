def solution(t, p):
    answer = 0
    str_t = t
    len_p = len(p)
    for i in range(0, len(str_t) - len_p + 1):
        sum_str = ""
        for j in range(i, i + len_p):
            sum_str += str_t[j]
        if int(sum_str) <= int(p):
            answer += 1

    return answer