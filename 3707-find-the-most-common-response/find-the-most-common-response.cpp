class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        map<string, int> mp;

        for (auto v : responses) {
            set<string> s;

            for (auto x : v)
                s.insert(x);

            for (auto x : s)
                mp[x]++;
        }

        string ans = "";
        int mx = 0;

        for (auto x : mp) {
            if (x.second > mx) {
                mx = x.second;
                ans = x.first;
            }
        }

        return ans;
    }
};