#include <iostream>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;
    
    while (t--) {
        ll a, b, c, k;
        cin >> a >> b >> c >> k;
        
        ll low = 0;
        ll high = 100000;
        ll mid;
        
        while (high - low > 1) {
            mid = (high + low) / 2;
            
            if (a * mid * mid + b * mid + c >= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        
        if (a * low * low + b * low + c >= k) {
            cout << low << endl;
        } else {
            cout << high << endl;
        }
    }
    
    return 0;
}
