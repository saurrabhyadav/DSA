class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // do not use this code for rotation
        int n = nums.size();
        k %= n;
        if(k>n) return;
        std::rotate(nums.begin(), nums.begin()+n-k, nums.end());
    }
};