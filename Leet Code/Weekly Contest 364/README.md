# LeetCode Weekly Contest 364 Solutions

This repository contains my solutions to the problems from LeetCode Weekly Contest 364, which took place on September 24, 2023.

## Contest Problems

1. [Maximum Odd Binary Number](https://leetcode.com/contest/weekly-contest-364/problems/maximum-odd-binary-number/)
   - [Solution](solution1)
   - Explanation: To find the maximum odd binary number, count the number of '1's and '0's in the input string 's'. If there are no '1's, return "0" because any binary number with all '0's is even. Otherwise, construct the maximum odd binary number by placing '0's equal to the count of '0's in 's' followed by '1'. This will ensure the binary number is odd.

2. [Beautiful Towers I](https://leetcode.com/contest/weekly-contest-364/problems/beautiful-towers-i/)
   - [Solution](solution2)
   - Explanation: Given a sequence of positive integers, we want to find the maximum sum of elements while ensuring that no two adjacent elements are included in the sum. To achieve this, iterate through the sequence, keeping track of the maximum sum ending at each position. The key idea is to maintain two variables: one representing the maximum sum including the current element, and another representing the maximum sum excluding the current element. Update these variables accordingly as you iterate through the sequence. The final result will be the maximum of these two variables.

3. [Beautiful Towers II](https://leetcode.com/contest/weekly-contest-364/problems/beautiful-towers-ii/)
   - [Solution](solution3)
   - Explanation: In this problem, you are given a sequence of positive integers, and the goal is to find the minimum number of elements to be removed such that the remaining elements form a beautiful tower. A beautiful tower is defined as a tower where each element is strictly greater than the sum of all elements below it. To approach this problem, iterate through the sequence in reverse order, starting from the last element. Keep track of the sum of elements encountered so far and the count of elements removed. If an element is greater than or equal to the sum of all elements below it, it's a part of the beautiful tower. Otherwise, remove it, increment the count, and update the sum of elements accordingly. The final count of removed elements is the answer.

4. [Count Valid Paths in a Tree](https://leetcode.com/contest/weekly-contest-364/problems/count-valid-paths-in-a-tree/)
   - [Solution](solution4)
   - Explanation: In this problem, you are given an undirected tree and two nodes, A and B. The task is to count the number of valid paths between A and B. A valid path is defined as a path between A and B that contains at least one prime number. To solve this problem, perform a Depth-First Search (DFS) traversal of the tree starting from node A. During the DFS, keep track of the prime numbers encountered along the path from A to the current node. As you reach node B, count the number of prime numbers in the path. Continue this process for all possible paths between A and B using DFS. The count of valid paths is the number of paths containing at least one prime number.

## Usage

You can click on the "Solution" links above to view the code for each problem. Feel free to use these solutions for reference or learning purposes.

## Contribution

If you have a better or different solution to any of the problems, please feel free to contribute by opening a pull request. I welcome any improvements or optimizations.
