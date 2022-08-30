class Solution {
public:
    int minDistance(string word1, string word2) {
        int m =word1.size(); int n = word2.size();
        int ans[m+1][n+1];
        for(int i = 0; i<m+1;i++){
            ans[i][0]=i;
        }
        for(int j = 0; j<n+1;j++){
            ans[0][j]=j;
        }
        
        for(int i = 1; i<m+1;i++){
            for(int j = 1; j<n+1;j++){
                if(word1[i-1]==word2[j-1]){
                    ans[i][j] = ans[i-1][j-1];
                }
                else{
                  ans[i][j] = 1+ min({ans[i-1][j-1], ans[i-1][j], ans[i][j-1]});
                }        
            }
        }
        return ans[m][n];
    }
};