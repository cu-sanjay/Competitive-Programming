#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    int minm = 0, maxm = 0, v = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == 'v' || str[i] == 'w') {
            v++;
            if (str[i] == 'w') {
                v++;
            }
        } else {
            minm++;
            maxm++;
            minm += (v / 2);
            maxm += v;
            if (v & 1) {
                minm++;
            }
            v = 0;
        }
    }

    minm += (v / 2);
    maxm += v;

    if (v & 1) {
        minm++;
    }

    cout << minm << ' ' << maxm << endl;

    return 0;
}
