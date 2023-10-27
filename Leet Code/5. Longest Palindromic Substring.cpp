class Solution {
public:
    std::string longestPalindrome(std::string s) {
        std::string T = "^#";
        for (char c : s) {
            T += c;
            T += '#';
        }
        T += "$";

        int n = T.size();
        std::vector<int> P(n, 0);
        int C = 0, R = 0;

        for (int i = 1; i < n-1; ++i) {
            P[i] = (R > i) ? std::min(R - i, P[2*C - i]) : 0;
            while (T[i + 1 + P[i]] == T[i - 1 - P[i]])
                P[i]++;

            if (i + P[i] > R) {
                C = i;
                R = i + P[i];
            }
        }

        int max_len = *std::max_element(P.begin(), P.end());
        int center_index = std::distance(P.begin(), std::find(P.begin(), P.end(), max_len));
        return s.substr((center_index - max_len) / 2, max_len);
    }
};
