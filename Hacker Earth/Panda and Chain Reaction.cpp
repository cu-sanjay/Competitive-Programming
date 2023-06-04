#include <iostream>
#define mod 1000003
#define ull unsigned long long
using namespace std;

int main() {
	int num,arr[1000004];
	arr[0]=1;
	long long i;
	for(i=1;i<1000004;i++)
	{
		arr[i]=(arr[i-1]*i)%mod;
	}
	cin >> num;	
	while(num--)
	{
		ull n,x;
		cin>>n>>x;
		n= (n >= 1000003) ? 0 : x*arr[n] ; 
		cout<< n%mod << endl;
	}
}