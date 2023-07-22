class Solution {
public:
double dp[26][26][102];
    int xmove[8] = {-2,-2,-1,-1,1,1,2,2};
    int ymove[8] = {-1,1,-2,2,-2,2,-1,1};
  double solve(int row,int col,int n,int k){
        if(row < 0 || col < 0 || row >= n || col >= n) return 0;
        if(k == 0) return 1;
        if(dp[row][col][k] != -1.0) return dp[row][col][k];
        
       double ans = 0;
        
        for(int i=0;i<8;i++){
            ans += solve(row+xmove[i], col+ymove[i], n, k-1);
        }
        
        return dp[row][col][k] = ans;
    }
    double knightProbability(int n, int k, int row, int col) {
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                for(int k=0;k<102;k++){
                    dp[i][j][k]=-1;
                }
            }
        }
        double favourableoutcome = solve(row,col,n,k);
        double totaloutcome = pow(8,k);
        return favourableoutcome/totaloutcome;
    }
};
