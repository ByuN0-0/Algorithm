import sys

n = int(sys.stdin.readline())
length = int(sys.stdin.readline())
line = sys.stdin.readline()
i = 0
cnt = 0
ans = 0

while i < (length-1):
  if line[i:i+3] == "IOI":
    i +=2
    cnt +=1
    if cnt == n:
      ans += 1
      cnt -= 1
  else:
    i+=1
    cnt = 0

print(ans)