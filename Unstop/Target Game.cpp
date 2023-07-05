#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>result;
vector<int>current;

void func(vector<int>& candidates,int target,int index)
{
    if(target==0)
    {
        result.push_back(current);
        return;
    }

    if(index==candidates.size() || target<0)
        return;
    
    current.push_back(candidates[index]);
    func(candidates,target-candidates[index],index);
    current.pop_back();
    func(candidates,target,index+1);      
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
{
    func(candidates,target,0);
    return result;
}

int main() 
{
    int target;
    cin>>target;
    int n;
    cin>>n;

    vector<int>candidates(n);

    for(int i=0;i<n;i++)
        cin>>candidates[i];

    vector<vector<int>>ans=combinationSum(candidates,target);

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
