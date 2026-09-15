class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        int sum = 0, sum2 = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            sum2 += nums[i];
            sum -= nums[i];

            ans.push_back(nums[i]);

            if (sum2 > sum) {
                break;
            }
        }

        return ans;
    }
};