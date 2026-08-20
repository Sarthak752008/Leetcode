class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vals;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

        int left = 0, right = vals.size() - 1;
        while (left < right) {
            if (vals[left] != vals[right]) return false;
            left++;
            right--;
        }

        return true;
    }
};