class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode *previous=NULL,*current=head,*temp=current->next;
        while(current!=NULL){
            temp=current->next;
            current->next=previous;
            previous=current;
            current=temp;
        }
        head=previous;
        return head;
    }
};