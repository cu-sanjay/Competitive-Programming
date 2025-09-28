# Amazon SDE 2025 – Online Assessment Question

## Problem Statement

Amazon Kindle has several e-books that customers can purchase directly.  
There are `n` books ordered sequentially numbered `1, 2, ..., n`, where the `i`th book has a cost of `cost[i]`.  
A customer wants to purchase all the books, and Kindle offers a unique discount to minimize the total cost.

The discount works as follows:
- The customer can buy the **leftmost** book for `cost[i]`.
- Or buy the **rightmost** book for `cost[j]`.
- Or buy **both the leftmost and rightmost books together** for `pairCost`. This option can be used **up to `k` times**.

**Goal:**  
Return the **minimum total cost** to buy all books.

## Function Signature

```cpp
long findMinPrice(vector<int> cost, int pairCost, int k)
```

## Input Format

```
5
9 11 13 15 17
6
2
```

- First line: number of books `n`
- Second line: array `cost[]` of size `n`
- Third line: `pairCost`
- Fourth line: `k`

## Output Format

```
21
```

## Sample Explanation

Buy:
- Book 1 individually → 9  
- Books 2 & 5 together → 6  
- Books 3 & 4 together → 6  

**Total = 9 + 6 + 6 = 21**

## Code Template

```cpp
#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'findMinPrice' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY cost
 *  2. INTEGER pairCost
 *  3. INTEGER k
 */

long findMinPrice(vector<int> cost, int pairCost, int k) {
    // Your code here
}
```
