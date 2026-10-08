class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>arr;
        unordered_map<int, int> freq;
        unordered_set<int> st;

        for (int x : nums) {
            freq[x]++;
            st.insert(x);
        }

        for(int x:st){
            if(freq[x]==1 && !st.count(x-1) && !st.count(x+1)){
                arr.push_back(x);
            }
        }
        return arr;
    }
};