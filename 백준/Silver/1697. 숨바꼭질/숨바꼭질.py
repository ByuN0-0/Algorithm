import sys

n, m = map(int, sys.stdin.readline().split())
visited = [0] * 100001
queue = []
queue.append([n, 0])
visited[n] = 1
if n == m:
    print(0)
elif n > m:
    print(n - m)
else:
    while (queue):
        num, cnt = queue.pop(0)
        visited[num] = 1
        cnt += 1
        num1 = num - 1
        num2 = num + 1
        num3 = num * 2
        for next_num in [num - 1, num+1, num*2]:
            if 0 <= next_num <= 100000 and visited[next_num] == 0:
                if next_num == m:
                    print(cnt)
                    sys.exit()
                visited[next_num] = 1
                queue.append([next_num, cnt])
