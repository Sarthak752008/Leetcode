class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        double sum = 0;

        for(int x : nums)
            sum += x;

        double avg = sum / nums.size();

        int ans = max(1, (int)floor(avg) + 1);

        while(true){
            bool found = false;

            for(int x : nums){
                if(x == ans){
                    found = true;
                    break;
                }
            }

            if(!found)
                return ans;

            ans++;
        }
    }
};