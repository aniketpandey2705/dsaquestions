class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int> row(n);
        vector<int> col(m);
        for(int i =0; i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[j]=1;
                    col[i]=1;
                }
            }
        }
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[j]==1||col[i]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};