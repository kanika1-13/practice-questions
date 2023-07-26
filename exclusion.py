def process_for_K(arr, K):
    bucket = []
    score = 0

    for i in range(K - 1):
        bucket.append(arr[i])

    for i in range(K - 1, len(arr)):
        bucket.append(arr[i])
        bucket.sort()
        picked = bucket.pop()
        score += picked

    return score

# Input reading and processing
T = int(input())

for _ in range(T):
    N = int(input())
    arr = list(map(int, input().split()))

    ans = []
    for K in range(1, N + 1):
        max_score = process_for_K(arr, K)
        ans.append(max_score)

    print(*ans)
