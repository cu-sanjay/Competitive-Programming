from collections import defaultdict

n, m = map(int, input().split())
group_a = defaultdict(list)

for i in range(1, n + 1): 
    word = input() 
    group_a[word].append(i)

for _ in range(m): 
    word = input() 
    indices = group_a[word]
    if indices:
        print(' '.join(map(str, indices)))
    else:
        print(-1)
