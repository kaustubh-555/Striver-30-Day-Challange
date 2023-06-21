class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * temp=node;
        while(node->next){
            temp=node;
            node=node->next;
            int val=temp->val;
            temp->val=node->val;
            node->val=val;
        }
        temp->next=NULL;
    }
};