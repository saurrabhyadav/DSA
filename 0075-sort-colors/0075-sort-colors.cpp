class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int mid = 0; 
        int hi = n-1;
        /*
        arr[mid] = 0, then swap arr[lo] and arr[mid] and increment lo by 1 because 
        all the zeros are till index lo - 1 and move to the next element so increment 
        mid by 1.
        arr[mid] = 1, then move to the next element so increment mid by 1.
        arr[mid] = 2, then swap arr[mid] and arr[hi] and decrement hi by 1 because 
        all the twos are from index hi + 1 to n - 1. Now, we don't move to the next 
        element because the element which is now at index mid can be a 0 and therefore 
        needs to be checked again.
        */
        while(mid <= hi)
        {
            if(nums[mid] == 0)
            {swap(nums[mid++], nums[lo++]);}

            else if(nums[mid] == 1)
            {mid++;}
            
            else
            {swap(nums[mid], nums[hi--]);}
        }
    }
};