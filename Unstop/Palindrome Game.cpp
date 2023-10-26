#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int minPalindromeCost(string str) {
    int n = str.length();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int l = 2; l <= n; l++) {
        for (int i = 0; i < n - l + 1; i++) {
            int j = i + l - 1;
            if (str[i] == str[j]) {
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
            }
        }
    }

    return dp[0][n - 1];
}

int main() {
    string str;
    cin >> str;
    int cost = minPalindromeCost(str);
    cout << cost << endl;
    return 0;
}
