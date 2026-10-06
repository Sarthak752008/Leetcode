class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt = 0;
        int cnt2 = 0;
        for(char ch : s){
            if(ch=='(') cnt++;
            else if(ch==')' && cnt!=0) cnt--;
            else if(ch==')' && cnt==0) cnt2++;
        }
        return abs(cnt+cnt2);
    }
};