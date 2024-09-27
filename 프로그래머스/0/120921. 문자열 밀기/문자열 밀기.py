def solution(A, B):
    from collections import deque
    answer = 0
    dq = deque(A)
    dq_B = deque(B)
    while dq != dq_B:
        dq.appendleft(dq.pop())
        if dq == deque(A):
            return -1
        answer += 1
    return answer
    
