n = int(input())
w = list(map(int,input().split()))
input()
m = list(map(int,input().split()))
b = []
for i in range(n):
    b += [i+1]*w[i]
for i in m:
    print(b[i-1])