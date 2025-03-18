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
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {

        ListNode *t = head;
        ListNode *h = head;
        while (h->next && h->next->next)
        {
            t = t->next;
            h = h->next->next;
        }

        ListNode *prev = nullptr;
        ListNode *tmp = nullptr;
        ListNode *curr = t->next;
        while (curr != nullptr)
        {
            tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        ListNode *p1 = head;
        ListNode *p2 = prev;
        while (p2)
        {
            if (p1->val != p2->val)
                return false;
            p1 = p1->next;
            p2 = p2->next;
        }

        return true;
    }
};