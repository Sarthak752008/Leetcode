class Solution {
public:
    string sortString(string s) {
        // Step 1: Count frequency of each character
        vector<int> freq(26, 0);

        for(char ch : s)
        {
            freq[ch - 'a']++;
        }

        // Step 2: Store answer
        string ans = "";

        // Step 3: Repeat until all characters are used
        while(ans.size() < s.size())
        {
            // Step 4: Smallest to largest
            for(int i = 0; i < 26; i++)
            {
                if(freq[i] > 0)
                {
                    ans += char(i + 'a');
                    freq[i]--;
                }
            }

            // Step 5: Largest to smallest
            for(int i = 25; i >= 0; i--)
            {
                if(freq[i] > 0)
                {
                    ans += char(i + 'a');
                    freq[i]--;
                }
            }
        }

        return ans;
    }
};