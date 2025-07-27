class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int start1 = 0, end1 = nums.size()-1, mid1 = 0, ans1 = -1;
        if(nums.size()==0)
        {result.push_back(-1); result.push_back(-1); return result;}

        while(start1 <= end1){
            mid1 = start1 + (end1-start1)/2;
            if(nums[mid1] < target) start1 = mid1 + 1;
            else if(nums[mid1] > target) end1 = mid1 -1;
            else{
                ans1 = mid1;
                end1 = mid1-1;
            }
        }
        result.push_back(ans1);

        int start2 = 0, end2 = nums.size()-1, mid2 = 0, ans2 = -1;
        while(start2 <= end2){
            mid2 = start2 + (end2-start2)/2;
            if(nums[mid2] < target) start2 = mid2 + 1;
            else if(nums[mid2] > target) end2 = mid2 - 1;
            else{
                ans2 = mid2;
                start2 = mid2+1;
            }
        }
        result.push_back(ans2);
        
        return result;
    }
};