class Solution {
public:
    ListNode* solve(ListNode * B,vector<ListNode *> &ll){
        if(B==NULL){
            return NULL;
        }
        ListNode * ans=solve(B->next,ll);

        if(ll.empty()){
            return ans;
        }
        if(B==ll[ll.size()-1]){
            ans=B;
            ll.pop_back();
        }
        return ans;
    }
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        vector<ListNode *> ll;
        while(A){
            ll.push_back(A);
            A=A->next;
        }
        return solve(B,ll);
    }
};