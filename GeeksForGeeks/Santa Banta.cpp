//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

class Solution{
public:
    vector<int>prime;
    void precompute(){
        vector<bool>isprime(1e6+1,true);
        isprime[0]=false;
        isprime[1]=false;
        for(int i=2;i<1e6+1;i++)
        {
            if(isprime[i]==true)
            {
                prime.push_back(i);
                int j=2*i;
                while(j<1e6+1)
                {
                    isprime[j]=false;
                    j=j+i;
                }
            }
        }
    }
    void dfs(int node,vector<vector<int>>&adj,vector<int>&vis,int &teamsize){
        teamsize++; 
        vis[node]=1;
        for(auto child:adj[node]){
            if(vis[child]==0){
                dfs(child,adj,vis,teamsize);
            }
        }
    }
    int helpSanta(int n,int m,vector<vector<int>>&g){
        vector<int>vis(n+1,0);
        int maxi=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                int teamsize=0; 
                dfs(i,g,vis,teamsize); 
                maxi=max(maxi,teamsize); 
            }
        }
        if(maxi==1){
            return -1;
        }
        return prime[maxi-1];
    }
};

//{ Driver Code Starts.
int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}
// } Driver Code Ends