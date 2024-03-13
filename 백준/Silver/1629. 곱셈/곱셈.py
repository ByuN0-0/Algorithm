import sys

a, b, c = map(int,sys.stdin.readline().split())

def power(num):
  if (num==0):
    return 1
  if (num==1):
    return a%c

  k = power(num//2) % c

  if (num%2==0):
    return k*k%c
  else:
    return k*k%c*a%c

print(power(b))