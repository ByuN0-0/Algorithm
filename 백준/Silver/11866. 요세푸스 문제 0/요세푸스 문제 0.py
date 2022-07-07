import sys

n,k = map(int,sys.stdin.readline().split())
arr = list(range(1,n+1))
a = k
yosep = []
while arr:
  for i in range(k-1):
    arr.append(arr.pop(0))
  yosep.append(arr.pop(0))

print("<",end='')
for i in range(n):
  if i==n-1:
    print(yosep[i],end='')
  else:
    print(yosep[i],end='')
    print(', ',end='')
print(">")