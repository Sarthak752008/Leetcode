class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        
        unordered_set<int> st(nums.begin(), nums.end());

        int count = 0;

        while(head != NULL) {
            
            // Current node nums mein hai
            if(st.count(head->val)) {
                
                // Agar next node nums mein nahi hai,
                // current component yahin end ho raha hai
                if(head->next == NULL || !st.count(head->next->val)) {
                    count++;
                }
            }

            head = head->next;
        }

        return count;
    }
};