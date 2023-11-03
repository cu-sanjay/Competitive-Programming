#include <iostream>
#include <vector>

using namespace std;

int minCostToMoveChips(vector<int>& position) {
    int even_count = 0;
    int odd_count = 0;

    for (int pos : position) {
        if (pos % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    return min(even_count, odd_count);
}

int main() {
    int n;
    cin >> n;
    vector<int> position(n);

    for (int i = 0; i < n; i++) {
        cin >> position[i];
    }

    int result = minCostToMoveChips(position);
    cout << result << endl;

    return 0;
}
