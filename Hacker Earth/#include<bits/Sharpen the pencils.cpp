#include<bits/stdc++.h>
using namespace std;

#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    speed
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int i=0;
        int j=n-1;
        int count1=0,count2=0,sum1=0,sum2=0;
        while(i<j)
        {
            if(sum1>sum2)
            {
                sum2+=(2*arr[j]);
                count2++;
                j--;
            }
            else if(sum2>sum1)
            {
                sum1+=arr[i];
                i++;
                count1++;
            }
            else
            {
                sum2+=(2*arr[j]);
                count2++;   
                j--;
                sum1+=arr[i];
                i++;
                count1++;
            }
        }
        if(i==j && sum1<=sum2)
            count1++;
        if(i==j && sum1>sum2)
            count2++;
        cout<<count1<<" "<<count2<<endl;
    }
}
