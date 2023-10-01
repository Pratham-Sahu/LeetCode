class Solution {
public:
    bool isGood(vector<int>& nums) {
        map<int,int>a;
        auto m=max_element(nums.begin(),nums.end());
        int n=*m;
        if(n!=nums.size()-1)
            return false;
        for(auto &i:nums)
            a[i]++;
        for(int i=1;i<nums.size();i++)
            if(a[i]==0)
                return false;
        if(a[n]!=2)
            return false;
        return true;
    }
};
