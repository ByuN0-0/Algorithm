import sys

arr = []
for i in range(31):
  arr.append(0)
for _ in range(28):
  arr[int(sys.stdin.readline())] = 1

for i in range(1, 31):
  if(arr[i]==0):
    print(i)