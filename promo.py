n,q = map(int,input().split())
item = sorted(list(map(int,input().split())))
ans=[0]
for i in item:
    ans += [ans[-1] + i]
for _ in range(q):
    x,y=map(int,input().split())
    print(ans[n+y] - ans[n-x])
 