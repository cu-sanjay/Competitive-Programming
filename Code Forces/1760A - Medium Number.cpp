#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
	int a,b,c;
	cin>>a>>b>>c;
    if((c>b && a>c) || (c>a && b>c)){
		cout<<c<<endl;
    } else if((a>b && c>a) ||(a>c && b>a)){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
  }
}
