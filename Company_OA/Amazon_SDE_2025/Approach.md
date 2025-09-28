### Approach

We use two pointers: left and right to simulate buying books from both ends.

- If pairCost is cheaper than buying both ends separately, and we still have k pair discounts left, we use it.
- Otherwise, we buy the cheaper of the two ends individually.
- If only one book remains, we buy it directly.

### Edge Cases
- If k = 0, we never use the pair option.
- If pairCost >= cost[left] + cost[right], it's better to buy individually.

### Tips
- Always compare pairCost with cost[left] + cost[right].
- Use long to avoid overflow for large cost arrays.

### Time Complexity
- **O(n)** – We process each book once.
