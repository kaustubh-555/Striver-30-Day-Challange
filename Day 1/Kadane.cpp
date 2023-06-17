class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current=0;
        int m=0;
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n;i++){
            current=current+nums[i];
            if(current<0){
                current = 0;
            }
            m=max(m,current);
        }
        if(m==0){
            m=nums[0];
            for(int i=0;i<n;i++){
                m=max(m,nums[i]);
            }
        }
        return m;
    }
};