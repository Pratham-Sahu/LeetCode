class Solution {
public:
    string removeOccurrences(string s, string part) {
        int t=s.find(part);
        if(t!=-1)
        {
            s.erase(t,part.length());
            return removeOccurrences(s,part);
        }
        else
            return s;
    }
};
