class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());
        for (int fix = 0; fix < nums.size(); ++fix) {
            if (fix > 0 && nums[fix] == nums[fix - 1]) continue;
            int left = fix + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[fix] + nums[left] + nums[right];
                if (sum == 0) {
                    result.push_back({nums[fix], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;
                    ++left;
                    --right;
                } else if (sum < 0) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        return result;
    }
};