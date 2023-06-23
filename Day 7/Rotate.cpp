class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        int n=0;
        ListNode * temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        if(n==1){
            return head;
        }
        k=k%n;
        if(k==0){
            return head;
        }
        temp=head;
        for(int i=0;i<n-k-1;i++){
            temp=temp->next;
        }
        ListNode * newend=temp;
        temp=temp->next;
        newend->next=NULL;
        ListNode * newbegin=temp;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=head;
        return newbegin;
    }
};