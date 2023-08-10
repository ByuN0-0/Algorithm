import sys

string = list(sys.stdin.readline().strip())

cnt = 0
temp = string[0]

for i in string:

    if temp != i:

        cnt += 1
        temp = i
cnt += 1


print(cnt//2)
