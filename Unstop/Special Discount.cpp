#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> prices;

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        prices.push_back(temp);
    }
    vector<int> final_prices;

    for(int i = 0; i < n; i++)
    {
        int finalcost = prices[i];
        for(int j = i+1; j < n; j++)
        {
            if(prices[j] <= prices[i])
            {
                finalcost = prices[i] - prices[j];
                break;
            }
        }
        final_prices.push_back(finalcost); 
    }

    for(int i = 0; i < n; i++)
    {
        cout << final_prices[i] << " ";
    }
    return 0;
}