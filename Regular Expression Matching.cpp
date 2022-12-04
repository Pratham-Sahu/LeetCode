class Solution {
public:
    bool isMatch(string str, string pat) {

        int n = str.size();
        
        int m = pat.size();

        

        vector<vector<bool>> dp(n + 1, vector<bool> (m + 1, false));

        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m ; j++)
            {
                if(i == 0 && j == 0)
                {
                    dp[i][j] = true;
                }
                else if(j == 0)
                {
                    dp[i][j] = false;
                }
                else if(i == 0)
                {
                    if(pat[j - 1] == '*')
                    {
                        dp[i][j] = dp[i][j - 2];
                    }
                    else
                    {
                        dp[i][j] = false;
                    }
                }
                else
                {
                    if(str[i - 1] == pat[j - 1] || pat[j - 1] == '.')
                    {
                        dp[i][j] = dp[i - 1][j - 1];
                    }
                    else if(pat[j - 1] == '*')
                    {

                        dp[i][j] = dp[i][j - 2];

                       

                        if(dp[i][j] == false && (str[i - 1] == pat[j - 2] || pat[j - 2] == '.'))
                        {
                            dp[i][j] = dp[i - 1][j];
                        }
                    }
                }
            }
        }

        return dp[n][m];
    }
};
