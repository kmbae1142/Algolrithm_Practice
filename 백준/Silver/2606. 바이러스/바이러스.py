import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**9)
count = 0

def DFS(graph, V, visited):
    global count
    visited[V] = True
    count += 1
    for i in graph[V]:
        if not visited[i - 1]:
            DFS(graph, i - 1, visited)


N = int(input())
M = int(input())
graph = [[] for _ in range(N)]
visited = [False] * N

for i in range(M):
    n1, n2 = map(int, input().split())
    graph[n1 - 1].append(n2)
    graph[n2 - 1].append(n1)

DFS(graph, 0, visited)
print(count - 1)