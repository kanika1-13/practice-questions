n, k = map(int, input().split())
input = input().split()
filtered = []
for x in input:
    if int(x) + k <= 5:
        filtered.append(int(x))
print(len(filtered) // 3)
