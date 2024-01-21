class Solution {
public:
    int rob(vector<int>& nums) {
       int prevMax = 0; 
        int currentMax = 0; 

        for (int num : nums) {
            int temp = currentMax;
            currentMax = max(prevMax + num, currentMax);
            prevMax = temp;
        }

        return currentMax;
   
    }
};
