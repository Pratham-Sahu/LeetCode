class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0]%10;
        for(int i=0;i<nums.size()-1;i++)
            nums[i]+=nums[i+1]%10;
        nums.resize(nums.size()-1);
        return triangularSum(nums); 
    }
};

// OR

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0]%10;
        while(nums.size()>1)
        {
            for(int i=0;i<nums.size()-1;i++)
            nums[i]+=nums[i+1]%10;
            nums.pop_back();
        }
        return nums[0]%10;
    }
};
