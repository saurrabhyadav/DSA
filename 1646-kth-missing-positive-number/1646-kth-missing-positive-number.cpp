class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0, end = arr.size()-1;
        while(start < end)
        {
            int mid = start + (end - start)/2;
            if(arr[mid] - mid -1 < k)
            {                
                start = mid +1;
            }
            else
                end = mid;
        }
        int diff = k - (arr[start] - start -1);
        if(diff>0)
            return arr[start]+diff; 
        return arr[start]+diff-1;       
    }
};