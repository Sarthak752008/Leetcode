/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int>st;
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
         for (int i = 1; i < left; i++) {
            temp = temp->next;
        }
        ListNode* start = temp;
        for(int i=left;i<=right;i++){
            st.push(temp->val);
            temp = temp->next;
        }
        temp = start;

        for (int i = left; i <= right; i++) {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }

        return head;
    }
};