n,m=map(int,input().split())
a=list(map(int, input().split()))
b=list(map(int,input().split()))
s = 0
i = 1
for x in b:
    while s + a[i-1] < x:
        s+=a[i-1]
        i += 1
    print(i,x-s)