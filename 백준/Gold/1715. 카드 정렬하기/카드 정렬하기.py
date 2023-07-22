import sys
import heapq

arr = []
ans = 0

n = int(sys.stdin.readline())

for _ in range(n):
  heapq.heappush(arr, int(sys.stdin.readline()))

while len(arr) > 1:
  a = heapq.heappop(arr)
  b = heapq.heappop(arr)
  heapq.heappush(arr, a + b)
  ans += (a + b)

print(ans)