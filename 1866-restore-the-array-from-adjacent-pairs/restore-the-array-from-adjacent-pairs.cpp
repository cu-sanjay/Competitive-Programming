#pragma GCC optimize("O3")
class Solution {
public:
    //Use -10^5 <= nums[i], ui, vi <= 10^5
    const int b=100000;
    vector<vector<int>> adj;
    vector<int> node;//Add this, to fasten finding node with deg=1
    void build_adj(vector<vector<int>>& adjacentPairs){
        adj.resize(2*b+1);
        #pragma unroll
        for(auto& e: adjacentPairs){
            int v0=e[0]+b, v1=e[1]+b;//The index for array must >=0
            if (!adj[v0].empty()) 
                adj[v0].push_back(v1);
            else{
                adj[v0]={v1};
                node.push_back(v0);
            }                
            if (!adj[v1].empty())
                adj[v1].push_back(v0);
            else{
                adj[v1]={v0};
                node.push_back(v1);
            }             
        }
    }
    vector<int> ans;
    void dfs(int i, int prev){
        ans.push_back(i-b);//minus b
        for(int j: adj[i]){
            if (j==prev) continue;
            dfs(j, i);
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n=adjacentPairs.size()+1;
        node.reserve(n);
        build_adj(adjacentPairs);
        int root=INT_MAX;
    //    cout<<node.size()<<endl;
        #pragma unroll
        for(int i: node){
        //    cout<<i<<"->"<<adj[i].size()<<",";
            if (adj[i].size()==1){
                root=i;
                break;
            }
        }
    //    cout<<root<<endl;
        ans.reserve(n);
        dfs(root, INT_MAX);
        return ans;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();