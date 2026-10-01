class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;

        while (true) {
            int pick = INT_MAX;

            // minimum non-zero element
            for (int x : nums) {
                if (x > 0) {
                    pick = min(pick, x);
                }
            }

            // saare elements 0 ho gaye
            if (pick == INT_MAX)
                break;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] > 0) {
                    nums[j] -= pick;
                }
            }

            cnt++;
        }

        return cnt;
    }
};