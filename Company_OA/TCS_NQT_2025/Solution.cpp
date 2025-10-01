#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X;
    cin >> X;

    if (X == 1) {
        cout << 0 << "\n";
        return 0;
    }

    int H = 63 - __builtin_clzll(X); 
    cout << H << "\n";

    for (int i = 0; i < H; i++) {
        cout << 1 << "\n";
    }
    return 0;
}
