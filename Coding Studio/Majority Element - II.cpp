#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();
    int threshold = n / 3;

    unordered_map<int, int> counts;
    vector<int> result;
    for (int num : arr)
        counts[num]++;
    for (auto it : counts)
    {
        if (it.second > threshold)
            result.push_back(it.first);
    }
    return result;
}
