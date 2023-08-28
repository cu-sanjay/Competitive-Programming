#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int ans = *max_element(arr.begin(), arr.end());
    return ans;
}
