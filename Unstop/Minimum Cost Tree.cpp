#include <bits/stdc++.h>
using namespace std;

int calculateSmallestSum(vector<int>& leafValues) 
{
    int sum = 0;
    stack<int> valueStack;
    
    for(int value : leafValues) 
    {
        while (!valueStack.empty() && valueStack.top() <= value) 
        {
            int current = valueStack.top();
            valueStack.pop();
            sum += current * min(valueStack.empty() ? INT_MAX : valueStack.top(), value);
        }
        valueStack.push(value);
    }

    int largestValue = valueStack.top();
    valueStack.pop();

    while (!valueStack.empty()) 
    {
        int current = valueStack.top();
        valueStack.pop();
        sum += current * min(valueStack.empty() ? INT_MAX : valueStack.top(), largestValue);
        largestValue = current;
    }
    return sum;
}

void solve() 
{
    int n;
    cin >> n;
    vector<int> leafValues;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        leafValues.push_back(value);
    }
    cout << calculateSmallestSum(leafValues);
}

int main() 
{
    ios_base::sync_with_stdio(false); 
    solve();
    
    return 0;
}
