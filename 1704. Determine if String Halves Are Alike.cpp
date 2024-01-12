class Solution {
public:
    bool halvesAreAlike(string s) {
        int counta=0,countb=0;
         int length = s.length();
        int middle = length / 2;
        std::string a = s.substr(0, middle);
        std::string b = s.substr(middle);
for (int i = 0; i < middle; i++) {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
                a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
                counta++;
            }
            if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' ||
                b[i] == 'A' || b[i] == 'E' || b[i] == 'I' || b[i] == 'O' || b[i] == 'U') {
                countb++;
            }
        }

        return counta == countb;
    }
};
