def solution(array, commands):
    answer = []
    
    for i in commands:
        array_split = array[i[0] - 1 : i[1]]
        array_split.sort()
        answer.append(array_split[i[2] - 1])
    
    return answer