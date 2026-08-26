class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int n = s.length();
        string ans = "";
        int bestLen = INT_MAX;

        for (int i = 0; i < n; i++) {

            int cnt = 0;

            for (int j = i; j < n; j++) {

                if (s[j] == '1') {
                    cnt++;
                }

                if (cnt == k) {

                    string temp = s.substr(i, j - i + 1);

                    if (temp.size() < bestLen ||
                        (temp.size() == bestLen && temp < ans)) {

                        bestLen = temp.size();
                        ans = temp;
                    }

                    break;
                }
            }
        }

        return ans;
    }
};