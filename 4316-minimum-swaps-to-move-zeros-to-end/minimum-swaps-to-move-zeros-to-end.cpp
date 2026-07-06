class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        
        int left = 0;
        int right = nums.size() - 1;

        int ans = 0;

        while (left < right) {

            while (left < right && nums[left] != 0)
                left++;

            while (left < right && nums[right] == 0)
                right--;

            if (left < right) {
                swap(nums[left], nums[right]);
                ans++;
                left++;
                right--;
            }
        }

        return ans;
    }
};