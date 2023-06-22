class Solution {
public:
    // int c=0;
    bool f=true;
    void val(ListNode * temp,ListNode * &head){
        if(temp->next!=NULL){
            val(temp->next,head);
        }
        if(head->val!=temp->val){
            f=false;
            return;
        }
        else{
            head=head->next;
            return;
        }
    }
    bool isPalindrome(ListNode* head) {
        ListNode * temp=head;
        val(temp,head);
        return f;
    }
};