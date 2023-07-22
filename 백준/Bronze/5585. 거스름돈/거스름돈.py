import sys

n = int(sys.stdin.readline())

k = 1000-n
a = k//500
k = k%500
b = k//100
k = k%100
c = k//50
k = k%50
d = k//10
k = k%10
e = k//5
k = k%5
f = k//1
print(a+b+c+d+e+f)