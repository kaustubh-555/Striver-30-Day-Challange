class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        ListNode * ans;
        ListNode * temp;
        if(l1->val<=l2->val){
            ans=l1;
            l1=l1->next;
        }
        else{
            ans=l2;
            l2=l2->next;
        }
        temp=ans;
        while(l1&&l2){
            if(l1->val<=l2->val){
                temp->next=l1;
                temp=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                temp=l2;
                l2=l2->next;
            }
        }
        if(l1==NULL){
            while(l2!=NULL){
                temp->next=l2;
                temp=l2;
                l2=l2->next;
            }
        }
        else{
            while(l1!=NULL){
                temp->next=l1;
                temp=l1;
                l1=l1->next;
            }
        }
        return ans;
    }
};