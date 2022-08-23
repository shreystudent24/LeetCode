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
         ListNode* reverse(ListNode* head)
    {
        //reversing code
        ListNode *c=head;
        ListNode *follow;
        ListNode *prev=NULL;
        while(c!=NULL)
        {
            follow=c->next;
            c->next=prev;
            prev=c;
            c=follow;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head)
    {
        //vector<int>r;
        if(head==NULL)//for 0 node
            return 0;
        if(head->next==NULL)
           return 1;
        if (head->next->next==NULL and head->next->val!=head->val)
            return 0;
        ListNode* slow=head;
        ListNode *fast=head;
        //finding the middle element, in case of even nodes 
        //first nodes should be returned
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        //now reversing the second half after middle
        ListNode* t=reverse(slow->next);
        // slow->next=t;
        ListNode * c=head;
        //checking for palindrome
        while(t!=NULL)
        {
            if(c->val!=t->val)
                return 0;
            t=t->next;
            c=c->next;
        }
        return 1;
        
    }
};
