class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {

        int n = arr.size();
        int sum = 0;
        int j = 0;
        int ans = INT_MAX;

        vector<int> best(n, INT_MAX);

        for (int i = 0; i < n; i++) {

            sum += arr[i];

            while (sum > target) {
                sum -= arr[j];
                j++;
            }

            // Current subarray [j ... i]
            if (sum == target) {

                int len = i - j + 1;

                // Pehle ka non-overlapping valid subarray
                if (j > 0 && best[j - 1] != INT_MAX) {
                    ans = min(ans, len + best[j - 1]);
                }

                // Current tak minimum length store karo
                best[i] = len;

            }

            // Previous minimum bhi carry forward karo
            if (i > 0) {
                best[i] = min(best[i], best[i - 1]);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};