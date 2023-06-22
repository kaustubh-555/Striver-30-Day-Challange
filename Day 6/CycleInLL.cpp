class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * fast;
        ListNode * slow;
        fast=head;
        slow=head;
        if(head==NULL){
            return false;
        }
        else if(head->next == NULL){
            return false;
        }
        else if(fast->next->next==NULL){
            return false;
        }
        else{
            while(fast!=NULL){
                if(fast->next==NULL)
                    return false;
                fast=fast->next->next;
                slow=slow->next;
                if(fast==slow){
                    return true;
                }
            }
        }
        return false;
    }
};