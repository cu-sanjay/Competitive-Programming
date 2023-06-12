#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  int a[n];
  int b[m];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(a, a + n);
  sort(b, b + m);
  int ans[100] = {0};
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (b[i] - a[j] > 0) {
        ans[b[i] - a[j]]++;
      }
    }
  }
  for (int i = 0; i < 100; i++) {
    if (ans[i] == n) {
      cout << i << " ";
    }
  }
  return 0;
}
