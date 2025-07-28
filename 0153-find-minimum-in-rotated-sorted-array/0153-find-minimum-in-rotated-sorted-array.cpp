class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0; int high = nums.size()-1, minimum = 5000;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            minimum = min(minimum, nums[mid]); 
            // Right half is sorted, so min must be in left half
            if(nums[mid] > nums[high]) low = mid +1;
            // Left half is sorted or duplicates exist
            else if( nums[mid] < nums[high]) high = mid - 1;
            //can't decide, shrink high
            else if(nums[mid] == nums[high]) high--;
        }
        return minimum;
    }
};