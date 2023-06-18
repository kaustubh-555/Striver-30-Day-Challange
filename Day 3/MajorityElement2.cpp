class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int> ans;
        int n=nums.size();
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>n/3){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};