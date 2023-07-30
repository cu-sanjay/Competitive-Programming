#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,multiset<string>> m;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int x;
        cin>>s>>x;
        m[x].insert(s);
    }
    auto it=--m.end();
    while(1)
    {
        auto &itn=(*it).second;
        int marks=it->first;
        for(auto name : itn)
        cout<<name<<" "<<marks<<"\n";
        if(it==m.begin())
        break;
        it--;
    }
}
