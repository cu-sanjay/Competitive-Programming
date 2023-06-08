#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base :: sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  int sum = 0;
  while (t--) {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 1; i <= n; i++) {
      int x;
      cin >> x;
      p[x] = i;
    }

    int lft = n, right = 1;
    for (int i = 1; i <= n; i++) {
      lft = min(lft, p[i - 1]);
      right = max(right, p[i - 1]);

      if (i == n) {
        cout << 1;
      } else if (p[i] > lft && p[i] < right) {
        cout << 0 << " ";
      } else {
        if (p[i] < lft) {
          cout << (1LL * (lft - p[i]) * (n - right + 1)) << " ";
        } else {
          cout << (1LL * lft * (p[i] - right)) << " ";
        }
      }
    }

    cout << "\n";
  }

  return 0;
}
