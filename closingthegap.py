for _ in range(int(input())):
    t = int(input())
    a = list(map(int, input().split()))
    print(min(sum(a) % t, 1))
