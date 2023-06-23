class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        int pos=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[pos]=nums[i-1];
                k++;
                pos++;
            }
        }

            nums[pos]=nums[n-1];
       return k; 
    }
};