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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=new ListNode();
        ListNode* temp1=new ListNode();
        int j=0;
        if(head==NULL||head->next==NULL)
        return head;
        temp=head;
        for(j=0;temp->next!=NULL;j++)
        temp=temp->next;
        k%=2*(j+1);
        while(k--)
        {
        temp=head;
        while(head->next!=NULL){
            temp1=head;
            head=head->next;
        }
        head->next=temp;
        temp1->next=NULL;
        }
        return head;
    }
};
