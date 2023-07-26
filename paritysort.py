t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    even= 0
    odd = 0
    for num in a:
        if num % 2 == 0:
            even += 1
        else:
            odd += 1
    if even > 1 and odd> 1 and even + odd == n and even != odd or even == n or odd == n:
        print("yes")
    else:
        print("no")
