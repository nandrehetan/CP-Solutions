class Solution {
public:
    int merge(vector<int>& nums, int low, int mid, int high) {
        int cnt = 0;
        int left = low;
        int right = mid + 1;
        vector<int> temp;

        while (left <= mid && right <= high) {
            if ((long long)nums[left] <= 2LL * nums[right]) {
                left++;
            } else {
                cnt += (mid - left + 1);
                right++;
            }
        }

        left = low;
        right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }

        return cnt;
    }

    int mergeSort(vector<int>& nums, int low, int high) {
        int cnt = 0;
        if (low < high) {
            int mid = low + (high - low) / 2;
            cnt += mergeSort(nums, low, mid);
            cnt += mergeSort(nums, mid + 1, high);
            cnt += merge(nums, low, mid, high);
        }
        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
