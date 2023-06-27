#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, int from_rod, int to_rod, int aux_rod, vector<vector<int>> &ans) {
    if (n == 1) {
        ans.push_back({from_rod,to_rod});
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod, ans);
    ans.push_back({from_rod,to_rod});
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod, ans);
}

vector<vector<int>> towerOfHanoi(int n) {
    vector<vector<int>> ans;
    towerOfHanoi(n, 1, 3, 2, ans);
    return ans;
}
