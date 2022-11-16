class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<h){
            int mid=(l+h)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
            h=mid-1;
            else
            l=mid+1;
        }
        if(nums[l]>=target)
        return l;
        else return l+1;
    }
};