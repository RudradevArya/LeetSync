class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        int dp[n+1][m+1];
        int res=0;
        //base
        for(int i=0;i<=n;++i){
            for(int j=0;j<=m;++j){
                // if(i==0 || j==0){
                    dp[i][j]=0;
                // }
            }
        }
        
        //recur
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]= 1 + dp[i-1][j-1];
                    // res = max(res, dp[i][j]);
                } 
                else{
                    dp[i][j]= max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        
        return dp[n][m];
        // return res;
    }
};