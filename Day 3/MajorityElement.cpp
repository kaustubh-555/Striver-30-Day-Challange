class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int max=0,ele;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>max){
                ele=it->first;
                max=it->second;
            }
        }
        return ele;
    }
};