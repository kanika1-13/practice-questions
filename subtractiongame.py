t = int(input()) 

for _ in range(t):
    a, b = map(int, input().split())
    n = a + 1
    while n % b == 0:
        n += 1
    
    print(n)
