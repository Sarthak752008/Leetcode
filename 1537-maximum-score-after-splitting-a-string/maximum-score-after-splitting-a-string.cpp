class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int ans = 0;

        for (int split = 1; split < n; split++) {
            int zeros = 0, ones = 0;

            for (int i = 0; i < split; i++)
                if (s[i] == '0')
                    zeros++;

            for (int i = split; i < n; i++)
                if (s[i] == '1')
                    ones++;

            ans = max(ans, zeros + ones);
        }

        return ans;
    }
};