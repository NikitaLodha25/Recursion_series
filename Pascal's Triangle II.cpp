//Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it.

class Solution {
public:
    void pascal(vector<vector<int>>& v, int n) {
        if (n == 0) {
            v[n].push_back(1);
            return;
        }
        pascal(v, n - 1);
        for (int i = 0; i <= n; i++) {
            if (i == 0 || i == n) {
                v[n].push_back(1);
                continue;
            }
            v[n].push_back(v[n - 1][i] + v[n - 1][i - 1]);
        }
        return;
    }

    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v(rowIndex + 1);
        pascal(v, rowIndex);
        return v[rowIndex];
    }
};
