n = int(input())
for _ in range(n):
    s = [input() for i in range(8)]
    ans = ""
    for col in range(len(s[0])):
        for row in range(len(s)):
            if s[row][col] != '.':
                ans += s[row][col]
    print(ans)
