class Solution {
public:
    string reverseWords(string s) {
        int n=s.length(),j=0;
        for(int i=0;i<=n;i++)
        {
            if(s[i]==' '||s[i]=='\0')
            {
                int a=i-1;
                while(j<a)
                {
                    char b=s[j];
                    s[j]=s[a];
                    s[a]=b;
                    j++;
                    a--;
                } 
                j=i+1;
            }
        }
        return s;
    }
};
