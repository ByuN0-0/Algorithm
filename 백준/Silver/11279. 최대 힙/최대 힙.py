import heapq
import sys

N = int(sys.stdin.readline())
q = []

for _ in range(N):
    x = int(sys.stdin.readline())
    if x > 0:
        heapq.heappush(q, -x)
    elif x == 0:
        if len(q) == 0:
            print(0)
        else:
            ans = heapq.heappop(q)
            print(-ans)
