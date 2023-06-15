class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int n = S.size();
        int anslen = 0;
        string ans = "";
        
        for(int i = 0; i<n; i++){
            int l = i, r=i;
            while(S[l] == S[r] && l>=0 && r<n){
                if(r-l+1 > anslen){
                    anslen = r-l+1;
                    ans = S.substr(l, anslen);
                }
                
                l--;
                r++;
            }
            l = i, r=i+1;
            while(S[l] == S[r] && l>=0 && r<n){
                if(r-l+1 > anslen){
                    anslen = r-l+1;
                    ans = S.substr(l, anslen);
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};
