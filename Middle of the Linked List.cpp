class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* n;
        int j=0;
        n=head;
        while(n!=NULL)
        {
            n=n->next;
            j++;
        }
        n=head;
        j=floor(j/2);
        for(int i=0;i<j;i++)
            n=n->next;
        return n;
    }
};
