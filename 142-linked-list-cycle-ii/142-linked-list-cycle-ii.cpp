/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        auto entry = head;
        auto fast = head;
        auto slow = head;
        
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow=slow->next;
            if(fast==slow){
                while(entry!=slow){
                    entry=entry->next;
                    slow=slow->next;
                }
                return entry;
            }
        }
        return NULL;
        
    }
};