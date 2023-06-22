class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * fast =  head;
        ListNode * slow = head;
        ListNode * temp ;
        if(fast==NULL){
            return NULL;
        }
        while(fast->next!=NULL&&slow->next!=NULL){
            fast=fast->next;
            if(fast->next==NULL){
                return NULL;
            }
            fast=fast->next;
            slow=slow->next;
            if(fast==slow){
                temp=fast;
                slow=head;
                while(fast!=slow){
                    fast=fast->next;
                    slow=slow->next;
                }
                return fast;
            }
        }
        return NULL;        
    }
};