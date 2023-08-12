#include <bits/stdc++.h>
using namespace std;
int findSteps(int &n,string &s,int row,int col,int pos){
   int ans=0;
    for(int i=pos;i<s.size();i++){
        if(s[i]=='L')
            col--;
        else if(s[i]=='R')
            col++;
        else if(s[i]=='U')
            row--;
        else
            row++;
        if(row<0 || col<0 || row>=n || col>=n)
            return ans;
        ans++;
    }
    return ans;
}

vector<int> executeInstructions(int n, vector<int>& pos, string s) {
    int size=s.size();
    vector<int>ans(size,0);
    for(int i=0;i<size;i++)
       ans[i]= findSteps(n,s,pos[0],pos[1],i);
    return ans; 
}

signed main() {
    int n;
    cin>>n;
    
    vector<int> pos(2);
    cin>>pos[0]>>pos[1];

    int m;
    cin>>m;
    string instruction;
    cin>>instruction;

    vector<int> ans = executeInstructions(n, pos,instruction);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
