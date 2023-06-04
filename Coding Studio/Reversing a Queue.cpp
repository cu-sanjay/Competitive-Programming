#include <bits/stdc++.h> 
void reverseQueueR(queue<int> &q)
{
    // Approach: Using Recursion.
    // Base Case
    if(q.empty()) return;
    int qfront = q.front();
    q.pop();
    reverseQueueR(q);
    q.push(qfront);
}

queue<int> reverseQueue(queue<int> q)
{
    // Approach: Using Recursion.
    // Base Case
    reverseQueueR(q);
    return q;
}
