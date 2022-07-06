import sys
dx = [0,0,1,-1]
dy = [1,-1,0,0]

def bfs(arr,a,b):
  sub =[]
  sub.append((a,b))
  arr[a][b]=0
  while sub:
    x,y=sub.pop(0)
    for i in range(4):
      nx = x+dx[i]
      ny = y+dy[i]
      if nx<0 or nx>=n or ny<0 or ny>=m:
        continue
      if arr[nx][ny]==1:
        arr[nx][ny]=0
        sub.append((nx,ny))
for _ in range(int(sys.stdin.readline())):
  n,m,k = map(int,sys.stdin.readline().split())
  arr = [[0]*m for _ in range(n)]
  temp = 0
  for _ in range(k):
    a,b = map(int,sys.stdin.readline().split())
    arr[a][b]=1
  for i in range(n):
    for j in range(m):
      if arr[i][j]==1:
        bfs(arr,i,j)
        temp+=1
  print(temp)