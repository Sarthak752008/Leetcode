class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        
        int pos = 0;
        int ans = 0;

        for (int x : nums) {

            pos += x;

            if (pos == 0)
                ans++;
        }

        return ans;
    }
};