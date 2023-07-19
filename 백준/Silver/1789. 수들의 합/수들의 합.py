import sys

N = int(sys.stdin.readline())
temp = N
cnt = 0
if(N==1):
  print(1)
else:
  for i in range(1,N):
    temp -= i
    cnt += 1
    if (temp<0):
      cnt -= 1
      break
  print(cnt)
