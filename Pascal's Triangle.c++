class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans={{1},{1,1}};
        if(numRows==1)
            return {{1}};
        for(int i=2;i<numRows;i++)
        {
            vector<int>t(i+1,1);
            for(int j=1;j<i;j++)
                t[j]=ans[i-1][j]+ans[i-1][j-1];
            ans.push_back(t);
            t.clear();
        }
        return ans;
    }
};
