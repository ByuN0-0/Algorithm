import sys
import heapq

n, m, x = map(int, sys.stdin.readline().split())
arr = [[] * (n + 1) for _ in range(n + 1)]

for i in range(m):
    a, b, c = map(int, sys.stdin.readline().split())
    arr[a].append([b, c])


def dijkstra(s):
    darr = [float('inf')] * (n + 1)
    darr[s] = 0
    q = []
    heapq.heappush(q, (0, s))
    while q:
        dist, now = heapq.heappop(q)
        if darr[now] >= dist:
            for v, val in arr[now]:
                if dist + val < darr[v]:
                    darr[v] = dist + val
                    heapq.heappush(q, (dist + val, v))
    return darr


ans = dijkstra(x)
ans[0] = 0
for i in range(1, n + 1):
    if i != x:
        res = dijkstra(i)
        ans[i] += res[x]

print(max(ans))