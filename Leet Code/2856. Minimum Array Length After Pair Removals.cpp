class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i : nums){
            mp[i]++;
        }
        int maxi = 0;
        for(auto it : mp){
            maxi = max(maxi, it.second);
        }
        if(maxi <= n/2){
            if(n%2){
                return 1;
            }
            else{
                return 0;
            }
        }
        return 2*maxi - n;
        
        
    }
};
