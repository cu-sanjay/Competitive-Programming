#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (a < b ? 1 : 0) + (a < c ? 1 : 0) + (a < d ? 1 : 0) << endl;
    }
    
}
