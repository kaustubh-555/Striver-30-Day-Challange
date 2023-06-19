class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<4){
            return ans;
        }
        
        int a=0,b=1,c,d;
        if(n==4){
          if((long) nums[a] + nums[b] + nums[c] + nums[d] == target){
                vector<int> t;
                t.push_back(nums[a]);
                t.push_back(nums[b]);
                t.push_back(nums[c]);
                t.push_back(nums[d]);
                s.insert(t);
          }
        }
       for(;a<n-3;a++){
           for(b=a+1;b<n-2;b++){
               c=b+1;
               d=n-1;
               while(c<d){
                if((long) nums[a] + nums[b] + nums[c] + nums[d] == target){
                vector<int> t;
                t.push_back(nums[a]);
                t.push_back(nums[b]);
                t.push_back(nums[c]);
                t.push_back(nums[d]);
                s.insert(t);
                    if(c==d-1){
                    b++;
                    c=b+1;
                    d=n-1;
                    }
                    else{
                        c++;
                    }
                    
          }
               else if((long) nums[a] + nums[b] + nums[c] + nums[d] < target){
                   c++;
               }
                   else{
                       d--;
                   }
            
           }
           }
       }
        for(auto it=s.begin();it!=s.end();it++){
            ans.push_back(*it);
        }
        return ans;
    }
};