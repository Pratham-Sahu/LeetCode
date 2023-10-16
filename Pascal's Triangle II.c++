class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v={1};
        vector<int> t;
        for(int i=1;i<=rowIndex;i++)
        {
            t.push_back(1);
            for(int j=0;j<v.size()-1;j++)
            {
                int n=v[j]+v[j+1];
                t.push_back(n);
            }
            v.clear();
            v=t;
            v.push_back(1);
            t.clear();
        }
        return v;
    }
};
