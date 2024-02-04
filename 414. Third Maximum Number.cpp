class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        
        int distinctCount = 1;
        int ans = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                distinctCount++;
            }
            
            if (distinctCount == 3) {
                ans = nums[i];
                break;
            }
        }
        
        return distinctCount >= 3 ? ans : nums[0];
    }
};
