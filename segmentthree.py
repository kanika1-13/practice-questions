n = int(input())
for _ in range(n):
    k = int(input())
    a = list(map(int, input().split()))
    ans = 0
    for i in range(k - 2):
        arr = a[i] + a[i + 1] + a[i + 2]
        rem = arr % 3
        if rem == 0:
            continue
        elif rem == 1:
            if a[i] % 3 == 1:
                a[i] += 1
            elif a[i + 1] % 3 == 1:
                a[i + 1] += 1
            else:
                a[i + 2] += 1
        elif rem == 2:
            if a[i] % 3 == 2:
                a[i] += 1
            elif a[i + 1] % 3 == 2:
                a[i + 1] += 1
            else:
                a[i + 2] += 1
        ans += 1
    print(ans)

