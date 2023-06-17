class Solution {
public:
    int solve(int i,int j,int &a,int &b,int p,vector<vector<int>> &dp,vector<int> &v1,vector<int> &v2){
        if(i==a){
            return 0;
        }
        j = upper_bound(v2.begin()+j,v2.end(),p)-v2.begin();
        if(dp[i][j] != -1)return dp[i][j];
        if(j==b && v1[i]<=p)return 2001;
        int take = 2001,nottake = 2001;
        if(j!=b)
        take = solve(i+1,j+1,a,b,v2[j],dp,v1,v2)+1;
        if(v1[i]>p)
        nottake = solve(i+1,j,a,b,v1[i],dp,v1,v2);
        return dp[i][j] = min(take,nottake);
    }
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size(),m=arr2.size();
        vector<vector<int>> dp(2001,vector<int>(2001,-1));
        sort(arr2.begin(),arr2.end());
        int a= solve(0,0,n,m,-1,dp,arr1,arr2);
        if(a>n)return -1;
        return a;
    }
};
