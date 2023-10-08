class Solution {
public:
    string defangIPaddr(string address) {
        string s,a="[.]";
        for(int i=0;i<address.size();i++)
        {
            if(address[i]!='.')
                s+=address[i];
            else
                s+=a;
        }
        return s;
    }
};
