n = int(input())
for _ in range(n):
    t = int(input())
    a = list(map(int, input().split()))
    odd_count = 0
    for num in a:
        if num % 2 != 0:
            odd_count += 1
    ans = min(odd_count, t - odd_count)
    print(ans)
