n = int(input())
for _ in range(n):
    k = int(input())
    a = list(map(int, input().split()))
    l = set()
    ans = 0  
    for s in a:
        if s not in l:
            l.add(s)
        else:
            l.remove(s)
        ans = max(ans, len(l))
    print(ans)
