n = int(input())
for _ in range(n):
    a, b, c = list(map(int, input().split()))
    d = c / 30
    k = a + d
    result = int((k + b - 1) // b)
    print(result)
