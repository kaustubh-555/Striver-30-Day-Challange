class Solution {
public:
    bool chklen(ListNode * head,int k){
        k--;
        while(k--){
            if(head->next==NULL){
                return false;
            }
            head=head->next;
        }
        return true;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode * temp=head;
        ListNode * current=head;
        ListNode * previous=NULL;
        int c=0;
        if(!chklen(head,k))
            return current;
        while(current!=NULL&&c<k){
            c++;
            temp=current->next;
            current->next=previous;
            previous=current;
            current=temp;
        }
        if(temp!=NULL){
            head->next=reverseKGroup(temp,k);
        }
        return previous;
    }
};