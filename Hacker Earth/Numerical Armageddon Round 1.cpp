#include <iostream>
#include <cstring>
using namespace std;

const int mod = 1000000007;
const int mx = (int)1e6 + 1;

typedef long long ll;

ll dp[mx][6];

ll memo(int i, int rem, string &str, int n) {
    if (i == n)
        return rem == 0;

    if (dp[i][rem] == -1) {
        dp[i][rem] = (memo(i + 1, (rem * 10 + str[i] - '0') % 6, str, n) +
                      memo(i + 1, rem, str, n)) %
                     mod;
    }

    return dp[i][rem];
}

void solve(int test) {
    string str;
    cin >> str;
    int n = str.length();

    memset(dp, -1, sizeof(dp));
    ll ans = memo(0, 0, str, n);
    ans--;

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    for (int test = 1; test <= t; test++) {
        solve(test);
    }

    return 0;
}
