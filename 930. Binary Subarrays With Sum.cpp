class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
         unordered_map<int, int> prefixSumFreq;
        int count = 0;
        int prefixSum = 0;

        for (int num : nums) {
            prefixSum += num;
            if (prefixSum == goal)
                count++;
            if (prefixSumFreq.count(prefixSum - goal))
                count += prefixSumFreq[prefixSum - goal];
            prefixSumFreq[prefixSum]++;
        }
        return count;    
    }
};
