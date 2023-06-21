class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head = new ListNode((l1->val + l2->val)%10);
        int c=0;
        c=(l1->val + l2->val)/10;
        l1=l1->next;
        l2=l2->next;
        ListNode * temp=head;
                
        while(l1!=NULL&&l2!=NULL){
            ListNode * newnode= new ListNode((l1->val + l2->val + c)%10);
            c=(l1->val + l2->val + c)/10;
            temp->next = newnode;
            l1=l1->next;
            l2=l2->next;
            temp=newnode;
        }
        if(l1==NULL&&l2!=NULL){
            while(l2!=NULL){
            ListNode * newnode= new ListNode((l2->val + c)%10);
            c=(l2->val+c)/10;
            temp->next=newnode;
            l2=l2->next;
            temp=newnode;
            }
        }
        else if(l1!=NULL&&l2==NULL){
            while(l1!=NULL){
            ListNode * newnode= new ListNode((l1->val + c)%10);
            c=(l1->val+c)/10;
            temp->next=newnode;
            l1=l1->next;
            temp=newnode;
            }
        }
        if(c>0){
            ListNode * newnode = new ListNode(c);
            temp->next=newnode;
            temp=newnode;
        }
        return head;
        
    }
};