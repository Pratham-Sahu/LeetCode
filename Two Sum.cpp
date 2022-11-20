class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> pairs(nums.size());
        for (int i = 0; i < nums.size(); ++i) pairs[i] = make_pair(nums[i], i);
        
        sort(pairs.begin(), pairs.end());
        
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int sum = pairs[left].first + pairs[right].first;
            if (sum == target)
                return {pairs[left].second, pairs[right].second};
            else if (sum > target)
                right -= 1;
            else
                left += 1;
        }
        return {};
    }
};
 
