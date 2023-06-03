//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int sum1=0,sum2=0,sum3=0;
        for(int i=0;i<N1;i++) sum1+=S1[i];
        
        for(int i=0;i<N2;i++) sum2+=S2[i];
        
        for(int i=0;i<N3;i++) sum3+=S3[i];
        
        int mn=sum1;
        if(mn>sum2) mn=sum2;
        if(mn>sum3) mn=sum3;
        
        int i=0,j=0,k=0;
        while((i<N1 && j<N2 && k<N3) && !(mn==sum1 && mn==sum2 && mn==sum3) )
        {
            while(i<N1 && sum1>mn) sum1-=S1[i++];
            
            while(j<N2 && sum2>mn) sum2-=S2[j++];
            
            while(k<N3 && sum3>mn) sum3-=S3[k++];
            
            mn=sum1;
            if(mn>sum2) mn=sum2;
            if(mn>sum3) mn=sum3;
        }
        
        if(mn==sum1 && mn==sum2 && mn==sum3) return mn;
        return 0;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends