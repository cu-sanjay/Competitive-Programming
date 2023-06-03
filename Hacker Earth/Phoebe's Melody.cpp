#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sky LONG_LONG_MAX
#define ajen LONG_LONG_MIN
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  ll t;
  cin >> t;

  while (t--) {
    ll n, k;
    cin >> n >> k;

    vector<pair<ll, ll>> v;

    for (int i = 1; i <= n; i++) {
      ll x;
      cin >> x;
      v.push_back({x, i});
    }

    sort(v.begin(), v.end());

    set<ll> s;
    s.insert(v[0].second);

    ll ans = 0;

    for (int i = 1; i < n; i++) {
      ll temp = 1000000000;
      ll bb = v[i].second - k;
      ll ff = v[i].second + k;

      set<ll>::iterator left, right;

      left = s.lower_bound(bb);
      right = s.lower_bound(ff);

      bool flag = false;

      if (left == s.end() || *left > bb) {
        if (left == s.begin()) {
          flag = true;
          left--;
        }
      }

      if (!flag && bb >= 1) {
        temp = abs(v[i].second - *left);
      }

      if (right != s.end() && ff <= n) {
        temp = min(temp, abs(*right - v[i].second));
      }

      if (temp != 1000000000) {
        ans += temp;
      }

      s.insert(v[i].second);
    }

    cout << ans << endl;
  }

  return 0;
}
