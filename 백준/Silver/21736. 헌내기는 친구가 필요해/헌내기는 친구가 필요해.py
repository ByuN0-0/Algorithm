import sys

dir = {(0, 1), (1, 0), (-1, 0), (0, -1)}

n, m = map(int, sys.stdin.readline().split())
visited = [[0]*m for _ in range(n)]
geo = []
for _ in range(n):
    geo.append(list(str(sys.stdin.readline().strip())))


def find_Loc():
    for i in range(n):
        for j in range(m):
            if (geo[i][j] == 'I'):
                loc = (i, j)
                return loc


def bfs(loc):
    cnt = 0
    q = []
    q.append(loc)
    while (q):
        a, b = q.pop(0)
        for dx, dy in dir:
            x = dx+a
            y = dy+b
            if (0 <= x < n and 0 <= y < m and visited[x][y] == 0 and (geo[x][y] == 'O' or geo[x][y] == 'P')):
                if (geo[x][y] == 'P'):
                    cnt += 1
                visited[x][y] = 1
                q.append((x, y))
    if cnt == 0:
        return ("TT")
    return (cnt)


print(bfs(find_Loc()))