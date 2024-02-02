class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int nonZeroIndex = 0;
    for (int currentIndex = 0; currentIndex < nums.size(); ++currentIndex) {
        if (nums[currentIndex] != 0) {
            std::swap(nums[nonZeroIndex++], nums[currentIndex]);
        }
        }
        
    }
};
