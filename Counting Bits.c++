#include<iostream>
#include<vector>
class Solution {
public:
    int conv(int x)
    {
        int a=0;
        for(int i=0;x>0;i++)
        {
            if(x%2==1)
                a++;
            x/=2;    
        }
        return a;
    }
    vector<int> countBits(int n) {
        vector<int>a;
        for(int i=0;i<=n;i++)
            a.push_back(conv(i));
        return a;
    }
};
