import sys


def trimmed_mean(arr, k):
    j = my_round(k * 0.15)
    ret = sum(arr[j:k - j])
    avg = ret / (k - 2 * j)
    return my_round(avg)


def my_round(k):
    a = k - int(k)
    a = a*10
    if a >= 5:
        return int(k) + 1
    else:
        return int(k)


n = int(sys.stdin.readline())
arr1 = []
for _ in range(n):
    arr1.append(int(sys.stdin.readline()))
if n == 0:
    print(0)
else:
    arr1.sort()
    ans = trimmed_mean(arr1, n)
    print(my_round(ans))