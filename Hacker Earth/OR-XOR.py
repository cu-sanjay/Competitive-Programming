inty = lambda: int(input())
listy = lambda: list(map(int, input().split()))
mappy = lambda: map(int, input().split())

import math
from collections import defaultdict as dd

T = inty()
for _ in range(T):
    n = inty()
    alist = listy()
    AND = -1
    OR = 0
    for i in alist:
        OR |= i
        AND &= i
    OR = bin(OR).replace("0b", "").count("1")
    AND = bin(AND).replace("0b", "").count("1")
    res = 1 << (OR - AND)
    print(res)
