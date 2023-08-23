#include <bits/stdc++.h> 
using namespace std;
vector < vector < int > > numberPattern(int N) {
vector<vector<int>> pattern;
    int num = 1;
    for (int i = 1; i <= N; i++) {
        vector<int> row;
        for (int space = 1; space <= N - i; space++) {
            row.push_back(-1); // Use -1 to represent spaces
        }
        for (int j = 1; j <= i; j++) {
            row.push_back(num);
            num = (num % 9) + 1;
        }
        pattern.push_back(row);
    }
    return pattern;
}
