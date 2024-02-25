class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int res = 0;
        std::unordered_set<char> uniq;

        for (char c : s) {
            uniq.insert(c);
        }

        for (char c : uniq) {
            int start = s.find(c);
            int end = s.rfind(c);

            if (start < end) {
                std::unordered_set<char> charSet;
                for (int i = start + 1; i < end; i++) {
                    charSet.insert(s[i]);
                }
                res += charSet.size();
            }
        }

        return res;        
    }
};