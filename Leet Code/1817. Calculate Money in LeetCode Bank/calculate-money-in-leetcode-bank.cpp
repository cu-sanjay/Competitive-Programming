class Solution {
public:
    int totalMoney(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int ans = 0;
        int mon = 1;

        while(n > 0)
        {
            if(n >= 7)
            {
              for(long i = mon; i < mon + 7; i++) ans += i;
              mon++;
              n = n - 7;
            }
            else
            {
              for(long i = mon; i < mon + n; i++) ans += i;
              n = 0;
            }
        }
        return ans;
    }
};