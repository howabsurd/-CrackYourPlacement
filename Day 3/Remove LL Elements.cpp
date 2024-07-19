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
    ListNode* removeElements(ListNode* head, int val) {
      ListNode * head2 = head;
      while(head2 && head2->val == val){
        head2 = head2->next;
      }  
      if(!head2) return NULL;
      ListNode * temp2 = head2;
      ListNode * temp = head2;
      while(temp2){
        temp2 = temp2->next;
        while(temp2 && temp2->val==val){
            temp2 = temp2->next;
        }
        temp->next = temp2;
        temp = temp2;
      }
      return head2;
    }
};