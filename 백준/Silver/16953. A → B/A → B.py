import sys
n, m = map(int, sys.stdin.readline().split())

cnt = 1
while (True):
    if (m == n):
        # print("search")
        break
    if (m < n or m < 1):
        cnt = -1
        break
    cnt += 1
    if (m % 2 == 0):
        m = m/2
        # print("1번 그리고 m값:", m)
        continue
    elif (m % 10 == 1):
        m = m//10
        # print("2번 그리고 m값:", m)
        continue
    cnt = -1
    break

print(cnt)
