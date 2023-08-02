import sys

global ans
ans = 0


def recursive(str, l, r):
    global ans
    ans = ans+1
    if (l >= r):
        return 1
    elif (str[l] != str[r]):
        return 0
    else:
        return recursive(str, l+1, r-1)


def isPalindrome(str):
    return recursive(str, 0, len(str)-1)


for _ in range(int(sys.stdin.readline())):
    ans = 0
    str = sys.stdin.readline().rstrip()
    print(isPalindrome(str), ans)