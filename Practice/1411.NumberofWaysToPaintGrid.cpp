class Solution {
public:
    int numOfWays(int n) {
        const int MOD = 1e9 + 7;

        long long dp2 = 6;
        long long dp3 = 6;

        for (int i = 2; i <= n; i++) {
            long long newDp2 = (dp2 * 3 + dp3 * 2) % MOD;
            long long newDp3 = (dp2 * 2 + dp3 * 2) % MOD;
            dp2 = newDp2;
            dp3 = newDp3;
        }

        return (dp2 + dp3) % MOD;
    }
};

// Status - Accepted