class Solution {
public:
    vector<int> sortArrayByParity(std::vector<int>& nums) {
        vector<int>a(nums.size(),0);
        int j=0,k=nums.size()-1;
        for(auto &i:nums)
        {
            if(i%2==0){
                a[j]=i;
                j++;
            }
            else
            {
                a[k]=i;
                k--;
            }
        }
        return a;
    }
};
