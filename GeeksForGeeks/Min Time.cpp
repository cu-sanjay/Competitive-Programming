class Solution {
  public:
    map<int,set<int>> mp;
    long long find(int pos, int index, vector<int>&temp, vector<vector<long long>> &dp,int indication){
        if(index==mp.size())return 0;
        if(dp[index][indication]!=-1)return dp[index][indication];
        int left=*mp[temp[index]].begin();
        int right=*mp[temp[index]].rbegin();
        long long one = abs(pos-left)+abs(left-right)+find(right,index+1,temp, dp,0);
        if(index==mp.size()-1)one+=abs(right-0);
        long long two = abs(pos-right)+abs(left-right)+find(left,index+1,temp, dp,1);
        if(index==mp.size()-1)two+=abs(left-0);
        return dp[index][indication]= min(one,two);
    }
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        vector<int> temp;
        for(int i=0; i<n; i++){
            mp[types[i]].insert(locations[i]);
        }
        for(auto i: mp) temp.push_back(i.first);
        vector<vector<long long>> dp(mp.size(),vector<long long> (2,-1)); 
        return find(0, 0, temp, dp, 1);
    }
};
