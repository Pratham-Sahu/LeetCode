#include<algorithm>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        auto it=m.begin();
        vector<int>v;
        for(auto &i:nums)
        {
            m[i]++;
            if(m[i]<3)
                v.push_back(i);
        }
        nums=v;
        return nums.size();
    }
};
