class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp=0;
        int sum=INT_MIN;
        for(auto i:nums)
        {
            temp+=i;
            sum=max(sum,temp);
            if(temp<0)
                temp=0;
        }
        return sum;
    }
};
