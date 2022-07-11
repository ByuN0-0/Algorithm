import sys

cnt = 0
n, m = map(int,sys.stdin.readline().split())

S = {sys.stdin.readline().strip() for _ in range(n)}
for i in range(m):
  if sys.stdin.readline().strip() in S:
    cnt += 1
print(cnt)