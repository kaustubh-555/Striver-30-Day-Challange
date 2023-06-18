class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int ans=false;
        for(int i=0;i<m;i++){
            if(target>=matrix[i][0]&&target<=matrix[i][n-1]){
                for(int j=0;j<n;j++){
                    if(matrix[i][j]==target){
                        ans=true;
                        break;
                    }
                }
            }
        }
        return ans;        
    }
};