class Solution {
    public int[] searchRange(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        int[] results = {-1, -1};

        while (left <= right) {
            if (nums[left] == target && results[0] == -1) {
                results[0] = left;
            }
            if (nums[right] == target && results[1] == -1) {
                results[1] = right;
            }
            
            if (results[0] == -1) {
                left++;
            }
            if (results[1] == -1) {
                right--;
            }
            if(results[0]!=-1 && results[1]!=-1){
                break;
            }
        }
        return results;
    }
}
