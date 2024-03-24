import heapq
import sys


def dijkstra(start):
    dist = [INF] * (N + 1)
    q = []
    heapq.heappush(q, (0, start))
    dist[start] = 0
    while q:
        d, now = heapq.heappop(q)
        if dist[now] < d:
            continue
        for i in graph[now]:
            cost = d + i[1]
            if dist[i[0]] > cost:
                dist[i[0]] = cost
                heapq.heappush(q, (cost, i[0]))
    return dist


N, E = map(int, sys.stdin.readline().split())
INF = int(1e9)
graph = [[] for _ in range(N + 1)]

for _ in range(E):
    a, b, c = map(int, sys.stdin.readline().split())
    graph[a].append((b, c))
    graph[b].append((a, c))

v1, v2 = map(int, sys.stdin.readline().split())
if E == 0:
    print(-1)
else:
    start_to = dijkstra(1)
    start_v1 = start_to[v1]  # 1-> v1
    start_v2 = start_to[v2]  # 1-> v2

    v1_to = dijkstra(v1)
    v1_v2 = v1_to[v2]  # v1->v2
    v1_end = v1_to[N]  # v1->n

    v2_to = dijkstra(v2)
    v2_v1 = v2_to[v1]
    v2_end = v2_to[N]  # v2->end

    first = start_v1 + v1_v2 + v2_end  # 1 -> v1 -> v2 -> end
    second = start_v2 + v2_v1 + v1_end  # 1 -> v2 -> v1 -> end

    ans = min(first, second)
    print(ans if ans < INF else -1)