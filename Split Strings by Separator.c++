class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> s;
        string a;
        for(auto &i:words)
        {
            a.clear();
            for(int j=0;j<i.length();j++)
            {
                if(i[j]==separator)
                {
                    if(a.length()!=0)
                        s.push_back(a);
                    a.clear();
                    continue;
                }
                a+=i[j];
            }
            if(a.length()!=0)
                s.push_back(a);
        }
        return s;
    }
};
