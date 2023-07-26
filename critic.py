n = int(input())
for _  in range(n):
    a,b,c = list(map(int, input().split()))
    if a+b >= 10:
        print("yes")
    elif (b+c >= 10):
        print("yes")
    elif(a+c >= 10):
        print("yes")
    else:
        print("no")