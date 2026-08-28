class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> res{"0", "1"};

        if (n == 1)
            return res;

        for (int i = 2; i <= n; i++) {
            vector<string> tmp;

            for (int j = 0; j < res.size(); j++) {
                if (res[j].back() == '1') {
                    tmp.push_back(res[j] + "0");
                    tmp.push_back(res[j] + "1");
                }
                else {
                    tmp.push_back(res[j] + "1");
                }
            }

            res = tmp;
        }

        return res;
    }
};