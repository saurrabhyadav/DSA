class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m; // m<sum,count>
        m[0] = 1; // for base case(arr having 1 element)
        int count = 0, prefixSum = 0;
        
        for(int i=0; i< nums.size(); i++)
        {
            prefixSum += nums[i];

            if (m.count(prefixSum-k)) 
            {count += m[prefixSum-k];}

            m[prefixSum]++;
            
        }
        return count;
    }
};