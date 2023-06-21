class Solution {
  public:
    int sumOfNaturals(int n) {
        // code here
        int ans;
        long long mod = 1e9+7;
        return ans = ((n%mod)*((n%mod)+1)/2)%mod;
    }
};  
