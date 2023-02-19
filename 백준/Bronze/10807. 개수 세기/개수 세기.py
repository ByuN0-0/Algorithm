import sys
n = int(sys.stdin.readline())
arr = list(map(int,sys.stdin.readline().split()))
v = int(sys.stdin.readline())
ans = 0
for i in range(n):
  if arr[i]==v:
    ans+=1
print(ans)