#include<cstring>
class Solution {
public:
    int lengthOfLastWord(string s) {
        string word="";
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ')
                word+=s[i];
            else if(word.length()!=0)
                break;
        }
        return word.length();
    }
};
