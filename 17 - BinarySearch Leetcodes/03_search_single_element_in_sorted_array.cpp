class Solution {
public:
    int singleNonDuplicate(std::vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            // Ensure mid is even to easily compare with the next element
            if (mid % 2 == 1) {
                mid--;
            }

            if (mid + 1 < n && nums[mid] == nums[mid + 1]) {
                left = mid + 2; // Move past the duplicate pair
            } else {
                right = mid; // Single element is at or before mid
            }
        }

        return nums[left];
    }
};