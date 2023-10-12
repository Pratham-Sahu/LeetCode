class Solution {
public:
    string rev(string s){
      reverse(s.begin(),s.end());
      return s;
    }
    string inv(string s)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
                s[i]='1';
            else
                s[i]='0';
        }
        return s;
    }
    char findKthBit(int n, int k) {
        string str="0";
        for(int i=1;i<=n;i++)
            str=str+'1'+rev(inv(str));
        return str[k-1];
    }
};

//OR

class Solution {
public:
    char findKthBit(int n, int k) {
        if (n == 1)
            return '0';
        int mid = (1 << (n - 1));
        if (k == mid)
            return '1';
        if (k < mid)
            return findKthBit(n - 1, k);
        else {
            char bit = findKthBit(n - 1, mid - (k - mid));
            return (bit == '0') ? '1' : '0';
        }
    }
};


