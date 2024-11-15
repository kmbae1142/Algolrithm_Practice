import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**9)

def DFS(graph, V, visited):
    visited[V] = True
    for i in graph[V]:
        if not visited[i - 1]:
            DFS(graph, i - 1, visited)


N, M = map(int, input().split())
graph = [[] for _ in range(N)]
visited = [False] * N
count = 0

for i in range(M):
    n1, n2 = map(int, input().split())
    graph[n1 - 1].append(n2)
    graph[n2 - 1].append(n1)

for i in range(N):
    if not visited[i]:
        DFS(graph, i, visited)
        count += 1

print(count)