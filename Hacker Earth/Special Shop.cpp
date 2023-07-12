#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;
        
        ll x, m1, m2;
        x = (n * b) / (a + b);
        m1 = a * x * x + b * (n - x) * (n - x);
        m2 = a * (x + 1) * (x + 1) + b * (n - x - 1) * (n - x - 1);
        
        cout << min(m1, m2) << endl;
    }
    
    return 0;
}
