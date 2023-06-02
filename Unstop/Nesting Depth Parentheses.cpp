#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int n; cin >> n;
  string seq; cin >> seq;
  
  int idx = 0, maxdepth = 0, d = 0;
  vector<int> arr(n);

  for(int i = 0; i < n; i++)
  {
    if(seq[i] == '(')
    {
        d++;          
        arr[i] = d;
    }
    else
    {
        arr[i] = d;
        d--;
    }
    
    if(maxdepth < d)
        maxdepth = d;                
  }
  
  for(int i = 0; i < n; i++)
  {
    if(2*arr[i] <= maxdepth)
        arr[i] = 0;
    else
        arr[i] = 1;
  }  
  
  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << '\n';
  
  return 0;
}