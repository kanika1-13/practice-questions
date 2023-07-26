import math
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    for j in range(1,n):
        l[j]+=l[j-1]
    ans=0
    for k in range(n-1):
        ans=max(ans,math.gcd(l[k],l[n-1]-l[k]))
    print(ans)
