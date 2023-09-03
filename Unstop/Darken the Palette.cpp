#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int ans = 0;

    vector<int> row_max(n, 0), col_max(n, 0);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            row_max[i] = max(row_max[i], a[i][j]);

    for(int j = 0; j < n; j++)
        for(int i = 0; i < n; i++)
            col_max[j] = max(col_max[j], a[i][j]);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int new_val = min(row_max[i], col_max[j]);
            ans += new_val - a[i][j];
        }
    }
    cout << ans << endl;

    return 0;
}
