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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool carry = 0;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ans = new ListNode(0); // Initialize with 0, not NULL
        ListNode* temp3 = ans;

        while (temp1 != NULL || temp2 != NULL) {
            int val1 = (temp1 != NULL) ? temp1->val : 0;
            int val2 = (temp2 != NULL) ? temp2->val : 0;
            int sum = val1 + val2 + carry;

            carry = (sum >= 10) ? 1 : 0;
            sum = sum % 10;

            temp3->next = new ListNode(sum);
            temp3 = temp3->next;

            if (temp1 != NULL) temp1 = temp1->next;
            if (temp2 != NULL) temp2 = temp2->next;
        }

        if (carry > 0) {
            temp3->next = new ListNode(carry);
        }

        return ans->next;
    }
};