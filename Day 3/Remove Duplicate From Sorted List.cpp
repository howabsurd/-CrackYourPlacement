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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head== nullptr || head->next == NULL) return head;
        ListNode * temp1 = head;
        ListNode * temp2 = head;
        ListNode * ans = head;
        while(temp2){
            if(temp1->val!=temp2->val){
                temp1->next = temp2;
                temp1 = temp2;
            }
            temp2 = temp2->next;
        }
        temp1->next =  nullptr;
        return ans;
    }
};