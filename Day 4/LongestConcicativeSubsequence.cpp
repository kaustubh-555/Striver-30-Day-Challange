class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int maxLen=0,len=1,prev;
        auto it=m.begin();
        prev=it->first;
        it++;
        for(it;it!=m.end();it++){
            if(it->first-prev==1){
                len++;
            }
            else{
                maxLen=max(len,maxLen);
                len=1;
            }
            prev=it->first;
        }
        maxLen=max(len,maxLen);


        return maxLen;
    }
};