import sys

l = int(sys.stdin.readline())
arr = sys.stdin.readline().strip()
hasharr = []
for i in arr:
  hasharr.append(ord(i)-96)

temp = 0
for i in range(l):
  temp += hasharr[i]*(31**i)

temp %= 1234567891
print(temp)