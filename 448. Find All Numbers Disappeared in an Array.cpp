class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> missingNumbers;
    unordered_set<int> numSet(nums.begin(), nums.end());

    int n = nums.size();

    for (int i = 1; i <= n; i++) {
        if (numSet.find(i) == numSet.end()) {
            missingNumbers.push_back(i);
        }
    }

    return missingNumbers;
    }
};
