import sys

n = int(sys.stdin.readline())
tree = [[] for _ in range(n + 1)]
for _ in range(n):
    line = list(map(int, sys.stdin.readline().split()))
    V = line[0]
    idx = 1
    while line[idx] != -1:
        tree[V].append((line[idx], line[idx + 1]))  # 정점,거리 리스트 삽입
        idx += 2

visited = [-1] * (n + 1)
visited[1] = 1
temp = [0, 0]


def DFS(node, dist):
    for v, d in tree[node]:
        sum_dist = dist + d
        if visited[v] == -1:
            visited[v] = sum_dist
            DFS(v, sum_dist)
    return


DFS(1, 0)
for i in range(1, n + 1):
    if visited[i] > temp[1]:
        temp[1] = visited[i]
        temp[0] = i

visited = [-1] * (n + 1)
visited[temp[0]] = 0

DFS(temp[0], 0)
print(max(visited))