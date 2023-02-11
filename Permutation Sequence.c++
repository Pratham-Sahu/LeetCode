class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> v;
        string ans;
        for(int i=1;i<=n;i++)
            v.push_back(i);
        do{
            k--;
            if(k==0)
            break;
        }while(next_permutation(v.begin(),v.end()));
        for(auto &i:v)
        ans+=char(i+48);
        return ans;
    }
};
