a,b,c = map(int, input().split())
if a == b:
    print(2*(a+c))
else:
    print(c * 2 + min(a, b) * 2 + 1)