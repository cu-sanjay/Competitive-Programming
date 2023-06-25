class Solution {
public:
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {

         int n = locations.size();
         int mod = 1e9 + 7;
         vector<vector<int>>dp(n,vector<int>(fuel+1));

         dp[start][fuel]=1;


         for(int f = fuel;f>=0;f--){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){

                    int diff = abs(locations[i] - locations[j]);

                    if(i != j && f >= diff)
                    dp[j][f-diff] = (dp[j][f-diff]%mod + dp[i][f]%mod)%mod;
                }
            }
         }

         int ans = 0;

         for(int i=0;i<=fuel;i++)
          ans = (ans%mod + dp[finish][i]%mod)%mod;

        return ans;   
    }
};
