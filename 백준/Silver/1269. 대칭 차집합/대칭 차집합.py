import sys
arr1 = []
arr2 = []
n, m = map(int,sys.stdin.readline().split())
arr1=list(map(int,sys.stdin.readline().split()))
arr2=list(map(int,sys.stdin.readline().split()))

s1 = set(arr1)
s2 = set(arr2)
a = len(s1-s2)
b = len(s2-s1)
print(a+b)