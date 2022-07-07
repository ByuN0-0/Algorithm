import sys
from collections import Counter
def solve():
  n = int(sys.stdin.readline())
  you = Counter(map(int,sys.stdin.readline().split()))
  m = int(sys.stdin.readline())
  me = list(map(int,sys.stdin.readline().split()))
  arr = []
  for i in me:
    arr.append(you[i])
  print(*arr)

solve()
