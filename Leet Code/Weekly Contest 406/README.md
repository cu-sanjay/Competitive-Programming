# Weekly Contest 406 - Date: July 14, 2024

## Good Morning...

### Today's Contest Summary >>

✅ **Q1: Get Smallest String**

- **Approach:** 
  - Iterate through the string.
  - If two adjacent characters have the same parity (both even or both odd) and the first one is greater than the second, swap them.
  - Return the modified string.

✅ **Q2: Modified List**

- **Approach:**
  - Create a hash set from the input vector.
  - Traverse the linked list.
  - If a node's value is found in the hash set, delete the node.
  - Return the modified list.

✅ **Q3: Minimum Cost**

- **Approach:**
  - Sort the horizontal and vertical cuts in descending order.
  - Use a greedy approach to choose the most expensive cut at each step.
  - Calculate the total cost based on the number of segments created by previous cuts.

✅ **Q4: Another Minimum Cost**

- **Approach:**
  - Similar to Q3, sort the horizontal and vertical cuts in descending order.
  - Use a greedy approach to choose the most expensive cut at each step.
  - Calculate the total cost based on the number of segments created by previous cuts.

### Contest Recap: 
  - **Q1** - string & parity
  - **Q2** - hash set & linked list
  - **Q3** and **Q4** - sorting & greedy
