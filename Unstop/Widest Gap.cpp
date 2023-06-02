#include<bits/stdc++.h>
using namespace std;

int maxWidthOfVerticalArea(vector<vector<int>>& points) 
{
        vector<int> x;
        for (int i=0;i<points.size();i++)
        {
            x.push_back(points[i][0]);
        }

        sort(x.begin(),x.end());
        int ans=0;
        int last=INT_MAX;
        for(int i=0;i<x.size()-1;i++)
        {
            ans=max(ans,x[i+1]-x[i]);
        }

        return ans;
    }

void solve()
{

  int n; 
  cin>>n;

  std::vector<std::vector<int>> v(n,std::vector<int>(2,0));

  for(int i=0;i<n;i++)
  {
    int a,b;
    cin>>a>>b;
    v[i][0]=a;
    v[i][1]=b;
  }

  cout<<maxWidthOfVerticalArea(v);

}

signed main()
{
    ios_base::sync_with_stdio(false);
    solve();
    return 0;

}