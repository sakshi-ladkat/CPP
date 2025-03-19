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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *first = head;
        ListNode *second = head;
        ListNode *current = head;

        int n = 0;

        // First pass: find length and the kth node from start
        while (current)
        {
            if (n == k - 1)
                first = current;
            current = current->next;
            n++;
        }

        // Second pass: find the kth node from the end
        current = head;
        for (int i = 0; i < n - k; i++)
        {
            second = second->next;
        }

        // Swap values
        swap(first->val, second->val);

        return head;
    }
};