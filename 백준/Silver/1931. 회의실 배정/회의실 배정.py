import sys
arr = []

for _ in range(int(sys.stdin.readline())):
  arr.append(list(map(int,sys.stdin.readline().split())))

arr.sort(key = lambda x:x[0])
arr.sort(key = lambda x:x[1])

cnt = 0
end_time = 0

for meeting in arr:
  start, end = meeting

  if start >= end_time:
    cnt+=1
    end_time = end

print(cnt)