# cook your dish here
for _ in range(int(input())):
    K = int(input()) - 1
    digits = []
    if K == 0:
        print('0')
    else:
        while K:
            digits.append(2 * int(K % 5))
            K //= 5
        print("".join([str(m) for m in digits][::-1]))
