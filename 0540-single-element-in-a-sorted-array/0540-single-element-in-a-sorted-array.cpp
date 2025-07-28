class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            // Check for single element
            bool leftSame = (mid > 0 && nums[mid] == nums[mid - 1]);
            bool rightSame = (mid < nums.size() - 1 && nums[mid] == nums[mid + 1]);

            if (!leftSame && !rightSame) {
                return nums[mid];
            }
            else if (leftSame) {
                int first = mid - 1;
                if (first % 2 == 0)
                    low = mid + 1;
                else
                    high = mid - 2;
            }
            else { // rightSame
                int second = mid + 1;
                if (second % 2 != 0)
                    low = mid + 2;
                else
                    high = mid - 1;
            }
        }
        return -1; 
    }
};
