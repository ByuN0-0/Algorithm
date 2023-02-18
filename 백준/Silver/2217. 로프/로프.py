import sys

a = []
N = int(sys.stdin.readline())
for _ in range(N):
  a.append(int(sys.stdin.readline()))
a = sorted(a,reverse=True)

max = a[N-1]
for i in range(0,N):
  current = a[i]*(i+1)
  if max < current:
    max = current
  
print(max)