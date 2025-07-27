class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size(), start = 0, end = n-1, mid = 0;
        if(target < nums[0]) return 0;
        if(target > nums[n-1]) return n;
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid] < target) start = mid + 1;
            else if(nums[mid] > target) end = mid - 1; 
            else return mid;
        }
        return end+1;
    }
};