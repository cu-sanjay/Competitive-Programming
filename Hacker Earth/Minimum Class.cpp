#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long N;
        cin >> N;
        long long x = sqrt(N);
        if(x * x == N) {
            cout << 2 * x - 1 << endl;
        } else if(x * (x + 1) >= N) {
            cout << 2 * x << endl;
        } else {
            cout << 2 * x + 1 << endl;
        }
    }
    return 0;
}
