#include <bits/stdc++.h> 
#include<stack>

void solve(queue<int>& q, int& k){
    if(k == 0){
        return;
    }

    int x = q.front();
    q.pop();
    k--;

    solve(q, k);
    q.push(x);
}

queue<int> reverseElements(queue<int> q, int k)
{
    int n = q.size()-k;
    solve(q, k);

    for(int i = 0; i < n; i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }

    return q;
}