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
    int pairSum(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next)
            slow = slow->next,
            fast = fast->next->next;
        ListNode *tmp = NULL;
        ListNode *p = NULL;
        ListNode *c = slow;
        while(c)
        {
            tmp = c->next;
            c->next = p;
            p = c;
            c = tmp;
        }
        int ans = 0;
        c = head;
        while(p)
        {
           ans = max(ans,c->val+p->val);
           c=c->next;
        p=p->next;
        }
        return ans;
    }
};