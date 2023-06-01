#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int  n , res = 0  ;
 cin>>n;
 res = n/5;
 if(n%5!=0)
 {
     res +=1;
 }
 cout<<res<<endl;

}