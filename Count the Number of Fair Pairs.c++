class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        long long ans1=0;
        while(l<r)
        {
           if(nums[l]+nums[r]>upper)
               r--;
            else
            {
                ans1+=(r-l);
                l++;
            }
        }
       l=0;
       r=nums.size()-1;
        long long ans2=0;
        while(l<r)
        {
           if(nums[l]+nums[r]>=lower)
               r--;
            else
            {
                ans2+=(r-l);
                l++;
            }
        }
        return ans1-ans2;
    }
};
