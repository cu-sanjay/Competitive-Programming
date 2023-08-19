#include <bits/stdc++.h>
using namespace std;

#define int long long

int N = 1e9 + 7;

vector<int> risk, par, s;

int find(int x) {
    if (par[x] == x) return x;
    return par[x] = find(par[x]);
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) {
        if (s[a] < s[b]) swap(a, b);
        par[a] = b;
        s[b] += s[a];
    }
}

signed main() {
    int n;
    cin >> n;

    risk = vector<int>(n);
    par = vector<int>(n + 1);
    for (int i = 0; i <= n; i++) {
        par[i] = i;
    }

    s = vector<int>(n + 1, 1);

    for (int i = 0; i < n; i++) {
        cin >> risk[i];
    }

    int k;
    cin >> k;
    while (k--) {
        int x, y;
        cin >> x >> y;
        Union(x, y);
    }

    map<int, map<int, int>> m;
    for (int i = 1; i <= n; i++) {
        m[find(i)][risk[i - 1]]++;
    }

    vector<pair<int, int>> v;
    for (auto it : m) {
        pair<int, int> p = {INT_MAX, INT_MAX};
        for (auto key : it.second) {
            p.first = min(p.first, key.first);
            if (p.first == key.first) {
                p.second = key.second;
            }
        }
        v.push_back(p);
    }

    int cnt = 1;
    for (auto it : v) {
        cnt = (cnt % N * it.second % N) % N;
    }

    cout << cnt << endl;
}
