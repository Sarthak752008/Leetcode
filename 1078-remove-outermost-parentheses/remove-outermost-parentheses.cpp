class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans = "";
        int balance = 0;

        for(char ch : s) {

            if(ch == '(') {

                // balance 0 = outermost opening
                if(balance > 0) {
                    ans += ch;
                }

                balance++;
            }

            else {

                balance--;

                // balance 0 = outermost closing
                if(balance > 0) {
                    ans += ch;
                }
            }
        }

        return ans;
    }
};