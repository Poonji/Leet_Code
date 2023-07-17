class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=1;
        int pre=nums[0];
        int count=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==pre+1)
            {
                count++;
            }
            else
            {
                count=1;
            }
               pre=nums[i];
               ans=max(ans,count);
        
        }
        return ans;
       
    }
};
