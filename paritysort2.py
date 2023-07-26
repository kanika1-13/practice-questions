t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    even = 0
    odd = 0
    for num in a:
        if num % 2 == 0:
            even += 1
        else:
            odd += 1
    if (even == odd):
        if(even%2 == 0 and odd % 2 == 0):
            print("yes")
        else:
            print("no")
        continue 
    if even == n or odd == n:
        print("yes")
        continue
    if (n%2 == 0):
        if (even > odd and even > 1 and odd > 1):
            print("yes")
        else:
            print("no")
    elif (n% 2 != 0):
            if (odd > even and even > 1 and odd > 1):
                print("yes")
            else:
                print("no")
    else:
        print("no")

