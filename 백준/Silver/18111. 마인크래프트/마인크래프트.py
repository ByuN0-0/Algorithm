import sys
arr = []
n, m, b = map(int,sys.stdin.readline().split())
leastTime = 1e9

for i in range(n):
  arr.append(list(map(int,sys.stdin.readline().split())))
for k in range(0,257):
  plus_block = 0
  build_block = 0
  block = b
  for i in range(n):
    for j in range(m):
      if k>arr[i][j]:
        build_block += k-arr[i][j]
      elif k<arr[i][j]:
        plus_block += arr[i][j]-k
  if block+plus_block>=build_block:
    time = plus_block * 2 + build_block
    if leastTime>=time:
      leastTime=time
      most_k=k
print(leastTime, most_k)