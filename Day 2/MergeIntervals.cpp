class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int h=intervals[0][1],l=intervals[0][0],i=0;
        for(i;i<n-1;i++){
            if(intervals[i][0]<=h){
                h=max(intervals[i][1],h);
            }
            else{
                ans.push_back({l,h});
                l=intervals[i][0];
                // h=intervals[i][1];
                h=max(intervals[i][1],h);
            }
        }
        // cout<<l<<" "<<h;
        if(h<intervals[n-1][0]){
            ans.push_back({l,h});
            ans.push_back({intervals[n-1][0],intervals[n-1][1]});
        }
        else{
            ans.push_back({l,max(h,intervals[n-1][1])});
        }


        return ans;
    }
};