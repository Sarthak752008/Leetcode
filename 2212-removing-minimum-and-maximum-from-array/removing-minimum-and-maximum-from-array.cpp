class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
         int n = nums.size();

        int minIndex = 0, maxIndex = 0;

        // Find min and max indices
        for (int i = 0; i < n; i++) {
            if (nums[i] < nums[minIndex])
                minIndex = i;

            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }

        int left = min(minIndex, maxIndex);
        int right = max(minIndex, maxIndex);

        // 1. Remove both from left
        int option1 = right + 1;

        // 2. Remove both from right
        int option2 = n - left;

        // 3. Remove min from left and max from right
        int option3 = (left + 1) + (n - right);

        return min({option1, option2, option3});
    }
};