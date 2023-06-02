#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,t;
    cin>>p>>t>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i*p;
    }
    if(sum>t)
    {
        cout<<sum-t;
    }
    else if(sum<=t)
    {
        cout<<"0";
    }
    return 0;
}