class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int lc=0,lr=0,hr=matrix.size()-1,hc=matrix[0].size()-1,i,j;
        while(lr<=hr&&lc<=hc)
        {
            for(j=lc;lr<=hr&&lc<=hc&&j<=hc;j++){
                ans.push_back(matrix[lr][j]);
            }
            lr++;
            for(i=lr;lr<=hr&&lc<=hc&&i<=hr;i++){
                ans.push_back(matrix[i][hc]);
            }
            hc--;
            for(j=hc;lr<=hr&&lc<=hc&&j>=lc;j--){
                ans.push_back(matrix[hr][j]);
            }
            hr--;
            for(i=hr;lr<=hr&&lc<=hc&&i>=lr;i--){
                ans.push_back(matrix[i][lc]);
            }
            lc++;
        }
        return ans;
    }
};
