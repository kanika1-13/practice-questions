for i in range(int(input())):
    n,m = map(int, input().split())
    if m < 2*n:
        print("-1 -1")
    else:
        print(n, 2*n)