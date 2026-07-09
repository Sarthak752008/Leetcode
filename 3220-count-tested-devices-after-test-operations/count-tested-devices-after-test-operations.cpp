class Solution {
public:
    int countTestedDevices(vector<int>& battery) {
        int tested = 0;

        for (int x : battery) {
            if (x > tested)
                tested++;
        }

        return tested;
    }
};