class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=-1,r=-1;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==target)
            {
                l=i;
                break;
            }
        for(int i=nums.size()-1;i>=0;i--)
            if(nums[i]==target)
            {
                r=i;
                break;
            }
        return {l,r};
    }
};

//OR

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto i=find(nums.begin(),nums.end(),target);
        if(i==nums.end())
            return {-1,-1};
        int l=distance(nums.begin(),i);
        int n=count(nums.begin(),nums.end(),target);
        return {l,l+n-1};
    }
};
