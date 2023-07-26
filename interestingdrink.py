from bisect import bisect
input()
a = sorted(list(map(int,input().split())))
for i in range(int(input())):
    print(bisect(a,int(input())))