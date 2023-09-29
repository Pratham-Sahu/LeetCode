class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int l=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                if(l==1)
                    return false;
                l=-1;
            }
            if(nums[i]<nums[i+1])
            {
                if(l==-1)
                    return false;
                l=1;
            }
        }
        return true;
    }
};
