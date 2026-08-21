class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* ans = even;

        while (odd->next != NULL && even->next != NULL) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = ans;

        return head;
    }
};