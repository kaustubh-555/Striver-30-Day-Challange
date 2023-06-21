class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz=0;
        ListNode * temp=head;
        ListNode * temp2=head;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        if(sz==1){
            return NULL;
        }
        if(sz-n-1<0)
            return head->next;
        for(int i=0;i<sz-n-1;i++){
            temp2=temp2->next;
        }
        temp2->next=(temp2->next)->next;
        return head;
    }
};