class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        vector<int> temp;
        int sum=0;
        for(auto element:A){
            temp.push_back(sum);
            sum+=element;
        }
        temp.push_back(sum);
        int maxi=0;
        map <int,int> m;
        for(int i=0;i<n+1;i++){
            auto it=m.find(temp[i]);
            if(it==m.end()){
                m[temp[i]]=i;
            }
            else{
                
                maxi=max(abs(it->second-i),maxi);
            }
        }
        return maxi;
    }
};
