class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        bool foundWord = false;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] != ' ') {
                len++;
                foundWord = true;
            } else {
                if(foundWord) // If a word has been found and encountered a space
                    break;    // Break the loop since we have found the last word
            }
        }
        
        return len;
        
    }
};
