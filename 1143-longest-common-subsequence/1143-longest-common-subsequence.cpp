class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if(text1.size()==0 || text2.size()==0)return 0;
        
        int m = text1.size();
        int n = text2.size();
        int ans[m+1][n+1];
        
        for(int i = 0; i<m+1; i++){
            ans[i][0]=0;
        }
        for(int i = 0; i<n+1; i++){
            ans[0][i]=0;
        }
        
        for(int i = 1; i<m+1; i++){
            for(int j = 1; j<n+1; j++){
                if(text1[i-1]==text2[j-1]){
                    ans[i][j]=1+ans[i-1][j-1];
                }
                
                else{
                    ans[i][j]=max(0+ans[i-1][j], 0+ans[i][j-1]);
                }
            }
        }
        
        return ans[m][n];
    }
};