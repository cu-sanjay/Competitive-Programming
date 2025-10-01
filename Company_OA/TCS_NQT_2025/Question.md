Problem Statement

You are a scientist working with bacteria cultures. You start with 1 petri dish containing 1 gram of bacteria at the end of hour 0. Your task is to reach exactly X grams of bacteria at the end of some hour with the minimum number of hours.

Rules of Bacteria Growth and Splitting

Splitting (instant, start of hour):

At the beginning of each hour, you may split any number of dishes into two equal halves.

Each dish can be split at most once per hour.

Example: If you have [2g, 3g, 5g] and split the first two → [1g, 1g, 1.5g, 1.5g, 5g].

Reproduction (automatic, during the hour):

At the end of the hour, each dish increases by +1g.

Example: [1g, 1.5g] at the start → [2g, 2.5g] at the end.

Input

An integer X (1 ≤ X ≤ 10^9), the target bacteria weight at the end of an hour.

Output

An integer H: the minimum number of hours required.

Then H lines, where the i-th line contains a single integer Ki = number of dishes split at the start of hour i.

Example
Input
10

Output
3
1
1
1

Explanation

End Hour 0: [1g]

Start Hour 1: Split [0.5g, 0.5g] → End Hour 1: [1.5g, 1.5g]

Start Hour 2: Split → [0.75g, 0.75g, 1.5g] → End Hour 2: [1.75g, 1.75g, 2.5g]

Start Hour 3: Split one dish → [1.25g, 1.25g, 1.75g, 1.75g] → End Hour 3: [2.25g, 2.25g, 2.75g, 2.75g] = total 10.

Answer: 3 hours, splits = 1, 1, 1.