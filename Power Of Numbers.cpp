// Given a number and its reverse. Find that number raised to the power of its own reverse.
// Note: As answers can be very large, print the result modulo 109 + 7.

class Solution {
public:
    long long power(int N, int R) {
        if (R == 0) return 1;
        if (R == 1) return N % 1000000007;

        long long known = power(N, R / 2) % 1000000007;
        long long ans = (known * known) % 1000000007;

        if (R % 2 == 0)
            return ans;
        else
            return (ans * N) % 1000000007;
    }
};
