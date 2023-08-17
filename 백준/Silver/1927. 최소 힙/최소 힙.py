import sys
import heapq

heap = []

for _ in range(int(sys.stdin.readline())):
    x = int(sys.stdin.readline())
    if (x == 0):  # 최소 힙 삭제
        if not heap:
            print(0)
        else:
            print(heapq.heappop(heap))
    else:  # 최소 힙 추가
        heapq.heappush(heap, x)
