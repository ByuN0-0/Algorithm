import sys

for _ in range(int(sys.stdin.readline())):
  n = int(sys.stdin.readline())
  a = n//25
  n %= 25
  b = n//10
  n %= 10
  c = n//5
  n %= 5
  d = n
  print(a, b, c, d)