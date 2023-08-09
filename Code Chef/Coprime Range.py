prime = [True]*(10**6 + 100)
z=0
for i in range(2, 10**6 + 100):
    if prime[i]:
        z = i;
        for j in range(2*i, len(prime), i):
            prime[j] = False

for i in range(int(input())):
    a, b = list(map(int, input().split()))
    print(z)
