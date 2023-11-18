#include <vector>
#include <algorithm>

class Solution {
public:
    int maxFrequency(std::vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());
        int left = 0, right;
        long long sum = 0;
        int result = 1;
        for (right = 1; right < nums.size(); ++right) {
            sum += (long long)(nums[right] - nums[right - 1]) * (right - left);
            while (sum > k) {
                sum -= nums[right] - nums[left];
                left++;
            }
            result = std::max(result, right - left + 1);
        }
        return result;
    }
};