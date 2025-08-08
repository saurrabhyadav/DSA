class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = 1e6, mid, sum;
        while (low < high) 
        {
            mid = low + (high - low) / 2, sum = 0;
            
            for (int i : nums)
            {sum += (i + mid - 1) / mid;}

            if (sum > threshold) low = mid + 1;

            else high = mid;
        }
        return low;
    }
};