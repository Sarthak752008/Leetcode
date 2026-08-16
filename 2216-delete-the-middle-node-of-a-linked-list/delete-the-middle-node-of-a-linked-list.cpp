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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next == nullptr){
            return NULL;
        }
        int len = 0; 
        ListNode* curr = head;
        while(curr!=NULL){
            len++;
            curr = curr->next;
        }
        ListNode* temp = head;
        int ind = len/2;
        int pos = 0;
        while(pos<ind-1){
            temp = temp->next;
            pos++;
        }
        temp->next = temp->next->next;
        return head;
    }
};