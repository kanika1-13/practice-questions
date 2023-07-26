home,guest = [],[]
for i in range(int(input())):
    a,b = input().split()
    home.append(a)
    guest.append(b)
print(sum(guest.count(i) for i in home))