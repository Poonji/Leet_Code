class Solution {
public:
    bool closeStrings(string word1, string word2) {
       if (word1.length() != word2.length()) {
            return false;
        }
        vector<int> freq1(26, 0), freq2(26, 0);
        unordered_set<char> charSet1, charSet2;
        for (char ch : word1) {
            freq1[ch - 'a']++;
            charSet1.insert(ch);
        }
        for (char ch : word2) {
            freq2[ch - 'a']++;
            charSet2.insert(ch);
        }
        if (charSet1 != charSet2) {
            return false;
        }
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        return freq1 == freq2;
    }
};
