vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>>vec;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            
            // while(nums[i]==nums[i+1]&&i<n-2){
            //     i++;
            // }
            int req=-nums[i];
            int s=i+1,e=n-1;
            while((i>0&&nums[i]!=nums[i-1])){i++;}
            while(s<e){
                
                if(nums[s]+nums[e]==req){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[s]);
                    temp.push_back(nums[e]);
                    ans.push_back(temp);
                    while(s<e&&nums[s]==nums[s-1]){s++;}
                    while(s<e&&nums[e]==nums[e+1]&&s<e){e--;}
                    s++;
                    e=n-1;
                }
                else if(nums[s]+nums[e]<req){
                    s++;
                }
                else{
                    e--;
                }
                
            }
            // }
        }
        
        return ans;
    }
};