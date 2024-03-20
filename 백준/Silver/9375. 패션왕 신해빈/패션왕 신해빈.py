import sys

n = int(sys.stdin.readline())

for _ in range(n):
    m = int(sys.stdin.readline())
    dic = {}
    for _ in range(m):
        a, b = sys.stdin.readline().split()
        if b in dic:
            dic[b].append(a)
        else:
            dic[b] = [a]

    cnt = 1
    for k in dic:

        cnt *= (len(dic[k]) + 1)
    print(cnt - 1)