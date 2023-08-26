import sys


def func(m, n, x, y):
    k = x
    while (k <= n*m):
        if ((k-x) % m == 0 and (k - y) % n == 0):
            return k
        k += m
    return -1


for _ in range(int(sys.stdin.readline())):
    m, n, x, y = map(int, sys.stdin.readline().split())
    print(func(m, n, x, y))
