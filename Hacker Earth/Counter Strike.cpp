#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;

        vector<pair<int, int>> v1(n), v2(m);

        for (int i = 0; i < n; i++) {
            cin >> v1[i].first >> v1[i].second;
        }

        for (int i = 0; i < m; i++) {
            cin >> v2[i].first >> v2[i].second;
        }

        sort(v2.begin(), v2.end()); // Sort v2 to optimize matching

        int p = 0;
        bool found = false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int ans = abs(v1[i].first - v2[j].first) + abs(v1[i].second - v2[j].second);
                if (ans <= d) {
                    p++;
                    v2.erase(v2.begin() + j);
                    break;
                }
            }
            if (p > (m / 2)) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
