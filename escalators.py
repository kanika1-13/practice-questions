t = int(input())
for _ in range(t):
    n, m, k, H = map(int, input().split())
    a = list(map(int, input().split()))
    count = 0
    for i in a:
        if i != H and abs(i - H) % k == 0 and abs(i - H) // k <= m - 1:
            count += 1
    print(count)


