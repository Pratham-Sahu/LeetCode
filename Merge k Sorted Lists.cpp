class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        return divide(lists, 0, lists.size() - 1);
    }
    ListNode* divide(vector<ListNode*>& lists, int start, int end) {
        if (start < end) {
            int mid = (start + end) / 2;
            ListNode* l1 = divide(lists, start, mid);
            ListNode* l2 = divide(lists, mid + 1, end);
            return mergeLists(l1, l2);
        } else if (start == end) return lists[start];
        else return NULL;
    }
    ListNode* mergeLists(ListNode* l1, ListNode* l2) {
            ListNode node(0);
            ListNode* head = &node;
            ListNode* head1 = l1;
            ListNode* head2 = l2;
            while (head1 != NULL && head2 != NULL ) {
                if (head1->val < head2->val) {
                    head->next = head1;
                    head1 = head1->next;
                }
                else {
                    head->next = head2;
                    head2 = head2->next;
                }
                head = head->next;
            }
            if (head1 != NULL)  head->next = head1;
            if (head2 != NULL)  head->next = head2;
            return node.next;
    }
};
