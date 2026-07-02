class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                string ans = words[j];
                reverse(ans.begin(), ans.end());

                if (words[i] == ans)
                    cnt++;
            }
        }

        return cnt;
    }
};