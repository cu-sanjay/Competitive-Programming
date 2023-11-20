#include <iostream>
#include <vector>
#include <numeric> 
class Solution {
public:
    int garbageCollection(std::vector<std::string>& garbage, std::vector<int>& travel) {
        int ans = 0;
        int n = garbage.size();
        bool m = false, p = false, g = false;
        for (int i = n - 1; i >= 0; --i) {
            if (!g && garbage[i].find('G') != std::string::npos) {
                g = true;
                ans += std::accumulate(travel.begin(), travel.begin() + i, 0);
            }
            if (!m && garbage[i].find('M') != std::string::npos) {
                m = true;
                ans += std::accumulate(travel.begin(), travel.begin() + i, 0);
            }
            if (!p && garbage[i].find('P') != std::string::npos) {
                p = true;
                ans += std::accumulate(travel.begin(), travel.begin() + i, 0);
            }
            if (m && p && g) {
                break;
            }
        }
        return ans + std::accumulate(garbage.begin(), garbage.end(), 0, [](int sum, const std::string& str) {
            return sum + str.size();
        });
    }
};