class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.length();
        int ind = -1;
        for(int i=0;i<n;i++){
            if(s[i]==s[n-i-1]){
                ind = i;
                break;
            }
        }
        return ind;
    }
};