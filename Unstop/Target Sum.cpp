#include <bits/stdc++.h>
using namespace std;

int findTargetSumWays(vector<int>& nums, int S) {
    unordered_map<int,int> cur({{0,1}}), nxt, *p_cur=&cur, *p_nxt=&nxt;
    for(int i = 0; i < nums.size(); i++) {
        for(auto &p : *p_cur) {		
            (*p_nxt)[p.first+nums[i]] += p.second; 
            (*p_nxt)[p.first-nums[i]] += p.second;
        }
        swap(p_cur,p_nxt);		
        p_nxt->clear();
    }
    return (*p_cur)[S];
}

int main() {
  vector<int> nums;
  int n,target;
	cin >> n;
 
	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		nums.push_back(x);
	}
	
	cin >> target;
 
	cout << findTargetSumWays(nums,target);
 
	return 0;
}