class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n - 1;
        int pivot = -1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            // Ensure mid is within bounds before accessing neighbors
            if (mid > 0 && nums[mid] < nums[mid - 1]) {
                pivot = mid;
                break;
            }
            if (mid < n - 1 && nums[mid] > nums[mid + 1]) {
                pivot = mid + 1;
                break;
            }

            if (nums[mid] > nums[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        // If pivot is still -1, the array is not rotated
        if (pivot == -1) pivot = 0;

        if (target >= nums[0] && pivot > 0 && target <= nums[pivot - 1]) {
            lo = 0;
            hi = pivot - 1;
        } else {
            lo = pivot;
            hi = n - 1;
        }

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;  // Fix incorrect calculation
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }

        return -1;
    }
};
