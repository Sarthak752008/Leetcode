class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int n = nums.size();
        int mid = nums[0];
        for(int i =0;i<n;i++){
            ans += abs(nums[i]-mid);
        }
        return ans;
    }
};