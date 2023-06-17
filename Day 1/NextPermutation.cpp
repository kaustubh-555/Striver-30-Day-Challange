class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        bool sor=true;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                auto it=nums.begin();
                for(int j=0;j<i;j++){
                    it++;
                }
                int m=i;
                for(int j=i;j<n;j++){
                    if(nums[j]>nums[i-1]&&nums[m]>nums[j]){
                        m=j;
                    }
                }
                swap(nums[m],nums[i-1]);
                sort(it,nums.end());
                sor=false;
                break;
            }
        }
        if(sor){
            sort(nums.begin(),nums.end());
        }
    }
};