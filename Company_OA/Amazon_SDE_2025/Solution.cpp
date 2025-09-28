#include <bits/stdc++.h>
using namespace std;

long findMinPrice(vector<int> cost, int pairCost, int k) {
    int left = 0, right = cost.size() - 1;
    long total = 0;

    while (left <= right) {
        if (left == right) {
            total += cost[left];
            break;
        }

        if (k > 0 && pairCost < cost[left] + cost[right]) {
            total += pairCost;
            k--;
            left++;
            right--;
        } else {
            if (cost[left] < cost[right]) {
                total += cost[left];
                left++;
            } else {
                total += cost[right];
                right--;
            }
        }
    }

    return total;
}
