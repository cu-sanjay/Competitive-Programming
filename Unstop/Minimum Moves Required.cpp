#include <iostream>
#include <vector>

using namespace std;

int minMovesToFormArray(vector<int>& targetArray) {
    int n = targetArray.size();
    int moves = 0;

    for (int i = 0; i < n; i++) {
        while (targetArray[i] > 0) {
            int j = i;
            while (j < n && targetArray[j] > 0) {
                j++;
            }
            for (int k = i; k < j; k++) {
                targetArray[k]--;
            }
            moves++;
        }
    }

    return moves;
}

int main() {
    int n;
    cin >> n;
    vector<int> targetArray(n);

    for (int i = 0; i < n; i++) {
        cin >> targetArray[i];
    }
    int result = minMovesToFormArray(targetArray);
    cout << result << endl;

    return 0;
}
