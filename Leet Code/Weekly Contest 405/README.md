# Weekly Contest 405 - HPY BDY THALA 7️⃣
- Date: July 7, 2024

## Good Morning...

### Today's Contest Summary >>

✅ **Q1: Find the Encrypted String (3 points)**

- **Approach:**
  - Set k = k % len(s).
  - Join the suffix of s starting at k with the prefix of s ending at k - 1.

✅ **Q2: Generate Binary Strings Without Adjacent Zeros (4 points)**

- **Approach:**
  - Start with ['0', '1'].
  - When adding a character, you can attach a '0' or '1' after a '1', but you can only attach a '1' after a '0'.

✅ **Q3: Count Submatrices With Equal Frequency of X and Y (5 points)**

- **Approach:**
  - Let X[i][j] be the number of 'X' in (0,0)...(i,j).
  - Then X[i][j] = X[i-1][j] + X[i][j-1] - X[i-1][j-1]. Do the same for Y.
  - Count the (i, j) such that X[i][j] > 0 and X[i][j] == Y[i][j].

✅ **Q4: Construct String with Minimum Cost (8 points)**

- **Approach:**
  - Use a trie to store the word costs.
  - Define DP(idx) as the minimum cost to finish the target from index idx.
  - Inside the DP function, traverse the trie.
  - If you find a match after k characters, a possible answer is DP(idx + k) + cost(match).

### Contest Recap:
- strings, DP nd DSA Basics...
- binary sequences, submatrices & min cost...
