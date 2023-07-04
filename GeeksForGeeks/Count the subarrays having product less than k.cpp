class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) 
    {
        long long p=1;//intial product
        int l=0,r=0,ans=0;
        while(r<n)
        {
            p=p*a[r];
            while(p>=k&&l<=r)//decrementing window from left
            {
                p=p/a[l];
                l++;
            }
            ans=ans+(r-l+1);//ending with rth index element hiw many sub arrays
            r++;
        }
        return ans;
    }


};
