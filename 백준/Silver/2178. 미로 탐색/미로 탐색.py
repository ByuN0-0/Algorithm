import sys

dir = {(-1, 0), (0, -1), (1, 0), (0, 1)}
n, m = map(int, sys.stdin.readline().split())

arr = []
ans = [[0]*m for _ in range(n)]
ans[0][0] = 1
visited = [[0]*m for _ in range(n)]
for _ in range(n):
    arr.append(list(map(int, str(sys.stdin.readline().strip()))))


def bfs():
    queue = []
    queue.append((0, 0))
    visited[0][0] = 1
    while queue:
        a, b = queue.pop(0)
        temp = ans[a][b]
        for dx, dy in dir:
            x = a+dx
            y = b+dy
            if (n > x >= 0) and m > y >= 0 and visited[x][y] == 0 and arr[x][y] == 1:
                ans[x][y] = temp+1
                visited[x][y] = 1
                queue.append((x, y))


bfs()
print(ans[-1][-1])
