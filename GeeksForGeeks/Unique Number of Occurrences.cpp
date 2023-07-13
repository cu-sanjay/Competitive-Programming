class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int>mpp;
        for(int i = 0;i<n;i++){
            mpp[arr[i]]++;
        }
        set<int>st;
        for(auto &it:mpp){
            st.insert(it.second);
        }
        
        return mpp.size()==st.size();
        
    }
};
