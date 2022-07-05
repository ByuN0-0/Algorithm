import sys

n = sys.stdin.readline().strip()
n = list(map(int,n))
n.sort(reverse= True)
n = list(map(str,n))
ans = ""
for i in n:
  ans +=i
print(ans)