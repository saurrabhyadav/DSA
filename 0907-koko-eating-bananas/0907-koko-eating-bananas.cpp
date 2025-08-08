class Solution {
public:
    int maxElement(vector<int>& piles){
        int maxVal = INT_MIN;
        for(int i=0; i<piles.size(); i++){
            maxVal = max(maxVal,piles[i]);
        }
        return maxVal;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxElement(piles);
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long hours = 0;
            for (int p : piles)
                hours += (p + mid - 1)/mid;

            if (hours <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};