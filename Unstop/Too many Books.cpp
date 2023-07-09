#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> books;
    vector<int> dp(n);

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        books.push_back(temp);
    }

    for(int i = 0; i < n; i++)
    {
        dp[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(books[j] >= books[i]) 
                continue;
	        dp[i] = max(dp[i], dp[j] + 1);
	    }
    }
    int result = 0;
    for(int i = 0; i < n; i++)
        result = max(result, dp[i]);
    cout << result << endl;
    return 0;
}
