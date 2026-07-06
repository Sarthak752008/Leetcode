class Solution {
public:

    bool equal(vector<vector<int>>& a, vector<vector<int>>& b) {
        return a == b;
    }

    vector<vector<int>> rotate(vector<vector<int>> mat) {

        int n = mat.size();

        vector<vector<int>> temp(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                temp[j][n - 1 - i] = mat[i][j];
            }
        }

        return temp;
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

        for (int k = 0; k < 4; k++) {

            if (equal(mat, target))
                return true;

            mat = rotate(mat);
        }

        return false;
    }
};