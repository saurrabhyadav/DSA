class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1, mid, first_occurence, second_occurence;

        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(mid>0 && nums[mid] == nums[mid-1]) 
            {
                first_occurence = mid - 1;
                second_occurence = mid;
                //if first_occurence at even index implies single element is in
                //right half
                if(first_occurence % 2 == 0) low = mid + 1;
                else high = mid - 2;
            }
            else if(mid < nums.size()-1 && nums[mid] == nums[mid+1]) 
            {
                second_occurence = mid + 1;
                first_occurence = mid;
                //if second_occurence at odd index implies single element is in
                //left half
                if(second_occurence % 2 != 0) low = mid + 2;
                else high = mid - 1;
            }
            //number at mid occurs only 1 time
            else return nums[mid];
        }
        return -1;
    }
};