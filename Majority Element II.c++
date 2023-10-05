class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    map<int,int>m;
    vector<int>a;
    int n=nums.size();
    for(auto &i:nums)
        m[i]++;
    n/=3;
    for(auto &i:m)
        if(i.second>n)
            a.push_back(i.first);
    return a;   
    }
};
