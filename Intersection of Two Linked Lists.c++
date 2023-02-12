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
        ListNode* tempA=new ListNode();
        ListNode* tempB=new ListNode();
        tempA=headA;
        tempB=headB;
        while(tempA)
        {
            tempB=headB;
            while(tempB)
            {
                if(tempA==tempB)
                    return tempA;
                tempB=tempB->next;
            }
            tempA=tempA->next;
        }
        return NULL;
    }
};
