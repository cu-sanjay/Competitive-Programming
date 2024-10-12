# Competitive Programming (Basic Placement Guide)

Having been through many coding assessments and interviews, I’ve noticed some key concepts and problems repeat themselves. Whether you’re preparing for university placements or coding interviews at MNCs and startups, this repo covers the most common topics you’ll encounter. 

> Practice and consistency are Important. The more problems you solve, the better you get.

## Top 10 Must-Know Concepts for Interviews

1. **Recursion** : Breaking a problem into smaller sub-problems, solving them with a base condition.
2. **Sliding Window** : Efficiently solving subarray problems by maintaining a window (range).
3. **String Manipulation** : Common string operations like reverse, substring, anagram detection.
4. **Breadth-First Search (BFS)** : Layer-wise graph traversal, useful for shortest path or tree level problems.
5. **Depth-First Search (DFS)** : Deep exploration in graphs or trees, used for connected components and cycles.
6. **Dynamic Programming (DP)** : Optimizing recursive problems by caching results to avoid recomputation.
7. **Greedy Algorithms** : Solving problems by making the best local decision at each step.
8. **Two Pointer Technique** : Efficiently working with sorted arrays by using two index pointers.
9. **Backtracking** : Trying possible solutions recursively, and undoing steps if necessary (e.g. N-Queens problem).
10. **Binary Search** : Searching in a sorted array by repeatedly dividing the search space.

## Interview-Focused Concepts

1. **Palindrome**  
   A string that reads the same forward and backward. Often asked in string-based problems.  
   Problem: [LeetCode Problem 5](https://leetcode.com/problems/longest-palindromic-substring) (longest palindromic substring).

2. **OOPs (Object-Oriented Programming)**  
   Classes and objects, used in Java, Python, and C++ interviews.  
   Key Concepts: Encapsulation, Polymorphism, Inheritance, Abstraction.

3. **Java**  
   Basic Java concepts like constructors, exception handling, and multithreading.  
   Problem: **Singleton pattern** or a **Comparator**.

4. **JavaScript**  
   Things like **closures**, **callbacks**, and **event loop** are frequent in frontend or full-stack interviews.  

5. **SQL**  
   Database management-related questions using **SELECT**, **JOIN**, **GROUP BY** commands.  
   VVIMP Query: Find the second-highest salary in a table.  
   ```sql
   SELECT MAX(salary) 
   FROM employees 
   WHERE salary < (SELECT MAX(salary) FROM employees);
   ```

## 15 Must-Solve LeetCode Problems

1. **Recursion**: [LeetCode Problem 104](https://leetcode.com/problems/maximum-depth-of-binary-tree) (max depth binary tree)
2. **Sliding Window**: [LeetCode Problem 3](https://leetcode.com/problems/longest-substring-without-repeating-characters) (longest substring without repeat)
3. **String Manipulation**: [LeetCode Problem 5](https://leetcode.com/problems/longest-palindromic-substring) (longest palindrome)
4. **BFS**: [LeetCode Problem 102](https://leetcode.com/problems/binary-tree-level-order-traversal) (level order traversal)
5. **DFS**: [LeetCode Problem 200](https://leetcode.com/problems/number-of-islands) (number of islands)
6. **DP**: [LeetCode Problem 53](https://leetcode.com/problems/maximum-subarray) (maximum subarray)
7. **Greedy**: [LeetCode Problem 55](https://leetcode.com/problems/jump-game) (jump game)
8. **Two Pointers**: [LeetCode Problem 15](https://leetcode.com/problems/3sum) (3 sum problem)
9. **Backtracking**: [LeetCode Problem 46](https://leetcode.com/problems/permutations) (permutations)
10. **Binary Search**: [LeetCode Problem 704](https://leetcode.com/problems/binary-search) (basic binary search)
11. **Palindrome**: [LeetCode Problem 5](https://leetcode.com/problems/longest-palindromic-substring) (longest palindrome)
12. **OOP in Java**: [LeetCode Problem 146](https://leetcode.com/problems/lru-cache/) (LRU Cache)
13. **SQL**: [LeetCode Problem 176](https://leetcode.com/problems/second-highest-salary) (second highest salary)
14. **JavaScript Closures**: [LeetCode Problem 20](https://leetcode.com/problems/valid-parentheses) (valid parentheses)
15. **Greedy Scheduling**: [LeetCode Problem 452](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons) (burst balloons)

## Complete Data Structures and Algorithms (DSA) Roadmap

Below is a **roadmap** that provides a step-by-step guide for mastering DSA concepts, from basic to advanced levels. Each section builds on the previous, making it easier for you to go ahead into the algorithms and data structures.

```plaintext
Data Structures
├── Basic Data Structures
│   ├── Arrays
│   ├── Strings
│   ├── Linked Lists
│   ├── Stacks
│   └── Queues
│
├── Advanced Data Structures
│   ├── Trees
│   │   ├── Binary Trees
│   │   ├── Binary Search Trees
│   │   ├── AVL Trees
│   │   └── B-Trees
│   ├── Graphs
│   │   ├── Adjacency Matrix
│   │   ├── Adjacency List
│   │   ├── Depth-First Search (DFS)
│   │   ├── Breadth-First Search (BFS)
│   │   └── Shortest Path Algorithms (Dijkstra's, Bellman-Ford)
│   ├── Heaps
│   ├── Hash Tables
│   ├── Disjoint Set Union (Union-Find)
│   ├── Tries
│   └── Segment Tree
│
Algorithmic Paradigms
├── Brute Force
├── Divide and Conquer
├── Greedy Algorithms
├── Dynamic Programming (DP)
├── Backtracking
├── Sliding Window Technique
└── Two Pointer Technique
```


## Core Topics by Language

1. **Java**
   - Understand multithreading, exception handling, and collections.
   - Practice implementing design patterns like **Singleton** and **Factory Pattern**.
   
2. **JavaScript**
   - Focus on concepts like **closures**, **promises**, and **event loop**.
   - Solve problems related to **array manipulations** and **object prototypes**.
   
3. **SQL**
   - Writing **JOIN** queries, aggregate functions, and subqueries.
   - Focus on database design, normalization, and index usage for optimization.

## Online Platforms for Practice

- [LeetCode](https://leetcode.com)
- [HackerRank](https://hackerrank.com)
- [GeeksforGeeks](https://geeksforgeeks.org)

## Personal Note :)

> [!IMPORTANT]  
> heyyy there.. Just a little something from me to you.. >>
> Be regular in your practice, that's the most important thing in our line of work. If I can do LeetCode medium problems today and then take a break from coding for 3-4 months, I won’t even be able to handle LeetCode easy problems later.
> So, whatever time you can spend on coding, make sure you spend it consistently. Participating in weekly contests on platforms like GeeksforGeeks, LeetCode, CodeChef, or Codeforces will give you a **reality check** on your speed and efficiency.
> **all the very best for the upcoming placement season** 🔚❤️

---

## Spoiler
<details>
<summary>ab padhai-likhai karo wrna...</summary>

<p align="center">
    <img src="https://github.com/user-attachments/assets/69ac6acd-5ce6-448c-95ee-2f495b43ca6d" width="30%" alt="Kyu Nahi Ho Rahi Padhai" />
</p>

</details>
