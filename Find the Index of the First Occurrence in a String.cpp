class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length(),s=needle.length(),k=-1;
        for(int i=0;i<n;i++)
        {
            if(haystack[i]==needle[0])
            {
                for(int j=0;j<s;j++)
                {
                    if(haystack[i+j]!=needle[j])
                        break;
                    if(j==s-1)
                        k=i;
                }
            }
            if(k!=-1)
                break;
        }
        return k;
    }
};
