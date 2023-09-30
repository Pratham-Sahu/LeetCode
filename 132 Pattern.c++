class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
    if (n < 3) {
        return false;
    }
    stack<int> s;
    int min_val = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] < min_val) {
            return true;
        }
        while (!s.empty() && nums[i] > s.top()) {
            min_val = s.top();
            s.pop();
        }
        s.push(nums[i]);
    }
    return false;
    }
};
