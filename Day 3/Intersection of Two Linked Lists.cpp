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
    int len(ListNode * head){
        int ans = 0;
        while(head){
            head = head->next;
            ans++;
        }
        return ans;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         int lenA = len(headA);
         int lenB = len(headB);
         int diff = abs(lenA - lenB);
         if(lenA > lenB){
            while(diff--){
                headA = headA->next;
            }
            while(headA){
                if(headA==headB) return headA;
                headA = headA->next;
                headB = headB->next;
            }
         }
         else{
            while(diff--){
                headB = headB->next;
            }
            while(headB){
                if(headA==headB) return headA;
                headA = headA->next;
                headB = headB->next;
            }
         }
    return nullptr;

    }
};