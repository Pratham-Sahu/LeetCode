class Solution {
public:
    iint sumDistance(vector<int>& nums, string s, int d) {
    int n = nums.size();
    vector<int> positions(nums);
    vector<int> directions(n, 1);
    vector<int> collision_times(n, INT_MAX);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (positions[i] < positions[j] && directions[i] == 1 && directions[j] == -1) {
                int collision_time = min(collision_times[i], collision_times[j]);
                int distance = (positions[j] - positions[i]) / 2;
                if (collision_time >= d) {
                    collision_times[i] = min(collision_times[i], d);
                    collision_times[j] = min(collision_times[j], d);
                } else {
                    collision_times[i] = min(collision_times[i], collision_time);
                    collision_times[j] = min(collision_times[j], collision_time);
                }
                d -= distance;
            }
            else if (positions[i] > positions[j] && directions[i] == -1 && directions[j] == 1) {
                int collision_time = min(collision_times[i], collision_times[j]);
                int distance = (positions[i] - positions[j]) / 2;
                if (collision_time >= d) {
                    collision_times[i] = min(collision_times[i], d);
                    collision_times[j] = min(collision_times[j], d);
                } else {
                    collision_times[i] = min(collision_times[i], collision_time);
                    collision_times[j] = min(collision_times[j], collision_time);
                }
                d -= distance;
            }
        }
    }
    long long total_distance = 0;
    for (int i = 0; i < n; i++) {
        total_distance +=(directions[i]) * collision_times[i];
    }
    int n=(total_distance + n) % (pow(10,9)+7)
    return n;
}
};
