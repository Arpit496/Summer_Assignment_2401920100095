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
    ListNode* reverselist(ListNode*head)
    {
        if(head==NULL||head->next==NULL) return head;
        ListNode* newhead=reverselist(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newhead;

    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode* newhead=reverselist(slow);
        ListNode* front=head;
        ListNode* second=newhead;
        while(second!=NULL)
        {
            if(second->val!=front->val)
            {
               
                return false;
            }
            second=second->next;
            front=front->next;
        }
        
        return true;


        
    }
};