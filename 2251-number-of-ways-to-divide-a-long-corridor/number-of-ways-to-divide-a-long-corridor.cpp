class Solution {
public:
    int numberOfWays(string corridor) {
        int chairs = 0;
        long long result = 1;

        for (int i = 0; i < corridor.size(); i++) {
            if (corridor[i] == 'S') {
                chairs++;

                while (++i < corridor.size() && corridor[i] != 'S');
                if (i < corridor.size() && corridor[i] == 'S') {
                    chairs++;
                }

                int divisions = 1;
                while (++i < corridor.size() && corridor[i] != 'S') {
                    divisions++;
                }

                if (divisions > 1 && i < corridor.size()) {
                    result = (result * divisions) % 1000000007;
                }
                i--;
            }
        }

        return (chairs != 0 && chairs % 2 == 0) ? static_cast<int>(result) : 0;
    
    }
};