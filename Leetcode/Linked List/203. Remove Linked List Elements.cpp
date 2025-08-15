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
        ListNode *curr,*prev,*temp;
        prev=head;
        curr=head->next;
        temp=curr->next;
        while(temp!=NULL)
        {
            if(head->val==val)
            {
                head=curr;
                prev=curr;
            }
            else if(temp->val==val)
            {
                prev->next=temp;
            }
             temp=temp->next;
             curr=curr->next;
             prev=prev->next;
        }
        return head;
    }
};