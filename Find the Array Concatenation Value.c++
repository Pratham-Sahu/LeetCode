class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
    if(nums.size()==0)
        return 0;
    if(nums.size()==1)
        return nums[0];
    else
    {
        long long n=nums[0]*pow(10,static_cast<int>(log10(nums[nums.size()-1])+1))+nums[nums.size()-1];
        nums.pop_back();
        nums.erase(nums.begin());
        return n+findTheArrayConcVal(nums);
    }
    }
};
