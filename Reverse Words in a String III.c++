class Solution {
public:
    string reverseWords(string s) {
        string a;
        vector<char> v;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                for(int j=v.size()-1;j>=0;j--)
                    a+=v[j];
                a+=' ';
                v.clear();
                continue;
            }
            v.push_back(s[i]);
        }    
        for(int j=v.size()-1;j>=0;j--)
            a+=v[j];
        return a;    
    }
};
