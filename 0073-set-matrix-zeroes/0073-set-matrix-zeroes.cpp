class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>rows(matrix.size(),1);
        vector<int>column(matrix[0].size(),1);
        
        //Search for all element
        for(int i = 0; i<matrix.size();i++){
            for(int j = 0; j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    rows[i]=0;
                    column[j]=0;
                }
            }
        }
        
        //Start Marking in Matrix
        for(int i = 0; i<matrix.size();i++){
            for(int j = 0; j<matrix[0].size();j++){
                if(rows[i]==0 || column[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};