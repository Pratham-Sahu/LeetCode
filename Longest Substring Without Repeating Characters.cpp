class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256,-1);
        int n=0,start=-1;
        for(int i=0;i<s.length();i++)
        {
            if(dict[s[i]]>start)
               start=dict[s[i]];
            dict[s[i]]=i;
            n=max(n,i-start);
        }
    return n;
    }
};
