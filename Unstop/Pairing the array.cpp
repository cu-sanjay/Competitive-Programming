#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll k;
    cin>>k;
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    ll ans = 0;
    map<ll, ll> mp;
    for(auto it : arr)
    {
        int gc = __gcd(k, it); 
        for(auto it1 : mp)
        {
            if((it1.first*gc)%k == 0)
                ans += it1.second;
        }
        mp[gc]++; 
    }
    cout<<ans<<endl;
    return 0;
}
