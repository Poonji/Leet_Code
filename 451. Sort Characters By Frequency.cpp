class Solution {
public:
    string frequencySort(string s) {
       std::unordered_map<char, int> charFrequency;
        for (char ch : s) {
            charFrequency[ch]++;
        }
        auto compare = [&](char a, char b) {
            return charFrequency[a] > charFrequency[b] || (charFrequency[a] == charFrequency[b] && a < b);
        };

        std::sort(s.begin(), s.end(), compare);

        return s;
    }
};
