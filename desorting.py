for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
 
    if n < 2:
        print("1")
    elif all(x == a[0] for x in a):
        print("1")
    elif any(a[i] > a[i + 1] for i in range(n - 1)):
        print("0")
    else:
        count = a[1]-a[0]
        for i in range(n-1):
            diff = a[i+1]-a[i]
            count = min(count,diff)
        print(count//2+1)