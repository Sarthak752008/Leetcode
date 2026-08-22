/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ans1 = headA;
        ListNode* ans2 = headB;
        while(ans1 != ans2){
            if(ans1==NULL) ans1 = headB;
            else ans1 = ans1->next;
            if(ans2==NULL) ans2 = headA;
            else ans2 = ans2->next;
        }
        return ans1;
    }
};