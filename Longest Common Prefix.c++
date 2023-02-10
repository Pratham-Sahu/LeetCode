class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        sort(strs.begin(),strs.end());
        int s=min(strs[0].size(),strs[strs.size()-1].size());
        string f=strs[0],l=strs[strs.size()-1];
        int i=0;
        while(l[i]==f[i]&&i<s)
        i++;
        ans=f.substr(0,i);
        return ans;
    }
};
