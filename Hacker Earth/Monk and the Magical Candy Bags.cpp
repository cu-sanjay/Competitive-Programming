#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;

        // Input the candies count into the multiset
        for (int i = 0; i < n; ++i) {
            long long candy_ct;
            cin >> candy_ct;
            bags.insert(candy_ct);
        }

        long long total_candies = 0;

        // Perform operations on the bags
        for (int i = 0; i < k; ++i) {
            auto last_it = (--bags.end());
            long long candy_ct = *last_it;
            total_candies += candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct / 2);
        }

        // Output the total number of candies for each test case
        cout << total_candies << endl;
    }
    return 0;
}
