class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        vector<int> prev;
        prev.push_back(0);
        for(int i=1;i<n+1;i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j=1;j<prev.size();j++){
                temp.push_back(prev[j]+prev[j-1]);
            }
            if(i>1)
            temp.push_back(1);
            prev=temp;
            ans.push_back(temp);
        }
        return ans;
    }
};