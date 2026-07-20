class Solution {
public:
    void separate(int n, vector<int>& ans) {
        if (n == 0) {
            ans.push_back(0);
            return;
        }

        vector<int> temp;
        while (n != 0) {
            temp.push_back(n % 10);
            n /= 10;
        }

        reverse(temp.begin(), temp.end());

        for (int x : temp)
            ans.push_back(x);
    }
    
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            separate(nums[i], ans);
        }

        return ans;
    }
};