class Solution {
public:
    void findSubsets(vector<int>& nums, vector<int>& subset, vector<vector<int>>& result, int index) {
        result.push_back(subset);

        unordered_set<int> seen;

        for (int i = index; i < nums.size(); i++) {
            if (seen.find(nums[i]) != seen.end()) {
                continue; 
            }

            subset.push_back(nums[i]);
            findSubsets(nums, subset, result, i + 1);
            subset.pop_back();

            seen.insert(nums[i]);
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;

        sort(nums.begin(), nums.end());

        findSubsets(nums, subset, result, 0);

        return result;
    }
};
