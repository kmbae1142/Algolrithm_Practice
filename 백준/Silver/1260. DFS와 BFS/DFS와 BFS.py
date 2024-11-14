import sys
from collections import deque
input = sys.stdin.readline

def DFS(graph, V, visited):
    visited[V] = True
    print(V + 1, end=' ')
    for i in graph[V]:
        if not visited[i - 1]:
            DFS(graph, i - 1, visited)

def BFS(graph, V, visited):
    queue = deque([V])
    visited[V] = True

    while queue:
        v = queue.popleft()
        print(v + 1, end=' ')
        for i in graph[v]:
            if not visited[i - 1]:
                queue.append(i - 1)
                visited[i - 1] = True


N, M, V = map(int, input().split())
graph = [[] for _ in range(N)]
visited = [False] * N

for i in range(M):
    n1, n2 = map(int, input().split())
    graph[n1 - 1].append(n2)
    graph[n2 - 1].append(n1)

for i in graph:
    i.sort()

DFS(graph, V - 1, visited)
print()
visited = [False] * N
BFS(graph, V - 1, visited)