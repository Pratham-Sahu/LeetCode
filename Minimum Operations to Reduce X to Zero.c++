class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int target = accumulate(nums.begin(), nums.end(), 0) - x;

        if (target < 0) {
            return -1;
        }

        int left = 0;
        int minOps = INT_MAX;
        int sum = 0;

        for (int right = 0; right < n; ++right) {
            sum += nums[right];

            while (sum > target) {
                sum -= nums[left];
                ++left;
            }

            if (sum == target) {
                minOps = min(minOps, n - (right - left + 1));
            }
        }

        return minOps == INT_MAX ? -1 : minOps;
    }
};
