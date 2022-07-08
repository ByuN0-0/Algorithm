import sys
def solve():
  n = int(sys.stdin.readline())
  first = 666
  while n!=0:
    if '666' in str(first):
      n=n-1
      if n==0:
        break
    first+=1
  print(first)

solve()