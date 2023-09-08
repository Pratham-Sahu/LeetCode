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
        

        ListNode* temp = new ListNode(0); 
        ListNode* h = head;
        ListNode* p = temp; 
        map<int, int> m;

        while (h) {
            m[h->val]++;
            h = h->next;
        }

        h = head;
        while (h) {
            if (m[h->val] == 1) {
                ListNode* t = new ListNode(h->val);
                p->next = t;
                p = t;
            }
            h = h->next;
        }

        return temp->next; 
    }
};
