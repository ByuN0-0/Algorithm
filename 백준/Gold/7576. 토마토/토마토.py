import sys
from collections import deque
dx = [0,0,1,-1]
dy = [1,-1,0,0]
q = deque()

arr=[]
n,m = map(int,sys.stdin.readline().split())

for _ in range(m):
  arr.append(list(map(int,sys.stdin.readline().split())))

for i in range(m):
  for j in range(n):
    if arr[i][j]==1:
      q.append((i,j))

while q:
  x, y = q.popleft()
  for k in range(4):
    nx=x+dx[k]
    ny=y+dy[k]
    if 0<=nx<m and 0<=ny<n:
      if arr[nx][ny]==0:
        arr[nx][ny]=arr[x][y]+1
        q.append([nx,ny])
    else:
      continue

ans = 0
temp = 0
for i in range(m):
  for j in range(n):
    if arr[i][j] == 0:
      ans = 0
      temp +=1
      break
    ans = max(ans,arr[i][j])
  if temp>0:
    break

print(ans-1)