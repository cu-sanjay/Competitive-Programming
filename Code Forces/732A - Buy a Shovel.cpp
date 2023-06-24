#include <iostream>
using namespace std;
int main() {
int k,r;
cin>>k>>r;
int val=1;
 while(true){
	 if(((val*k)-r)%10==0||val*k%10==0)break;
	 else
		 ++val;
 }
cout<<val;
	return 0;
}
