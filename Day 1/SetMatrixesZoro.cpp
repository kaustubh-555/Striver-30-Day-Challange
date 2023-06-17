class Solution {
public:
    int rows,col;
    void set(int i,int j,vector<vector<int>>& matrix){
        for(int k=0;k<rows;k++){
            matrix[i][k]=0;
        }
        for(int k=0;k<col;k++){
            matrix[k][j]=0;
        }
        return;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        rows=matrix[0].size();
        col=matrix.size();
        vector<pair<int,int>> z;
        for(int i=0;i<col;i++){
            for(int j=0;j<rows;j++){
                if(matrix[i][j]==0){
                    // set(i,j,matrix)
                    if(z.size()<rows+col)
                    z.push_back(pair<int,int>(i,j));
                }                
            }
        }
        for(int i=0;i<z.size();i++){
            set(z[i].first,z[i].second,matrix);
        }
        return;
    }
};