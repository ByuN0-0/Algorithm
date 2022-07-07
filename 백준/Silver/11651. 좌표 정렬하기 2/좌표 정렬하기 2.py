import sys
arr = []
for _ in range(int(sys.stdin.readline())):
  x,y = map(int,sys.stdin.readline().split())
  arr.append((x,y))
arr.sort(key=lambda x:(x[1],x[0]))
for k in arr:
  print(*k)