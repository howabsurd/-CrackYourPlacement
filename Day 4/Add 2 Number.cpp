class Solution {
public:

    ListNode* reverseLL(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* head2 = reverseLL(head->next);
        head->next->next = head;
        head->next = NULL;
        return head2;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rl1 = reverseLL(l1);
        ListNode* rl2 = reverseLL(l2);
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;
        int carry = 0;

        while (rl1 || rl2 || carry) {
            int sum = carry;
            if (rl1) {
                sum += rl1->val;
                rl1 = rl1->next;  
            }
            if (rl2) {
                sum += rl2->val;
                rl2 = rl2->next; 
            }
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
            carry = sum / 10;
        }

        ans = reverseLL(ans->next);  
        return ans;
    }
};
