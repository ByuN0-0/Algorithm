import sys

n, m = map(int, sys.stdin.readline().split()) # 사람 수 n, 파티 수 m
truth = set(list(map(int, sys.stdin.readline().split()))[1:])
parties = []
for _ in range(m):
    parties.append(set(list(map(int,sys.stdin.readline().split()))[1:]))

for _ in range(m):
    for party in parties:
        if party & truth:
            truth = truth.union(party)
cnt = 0
for party in parties:
    if not (party & truth):
        cnt += 1

print(cnt)