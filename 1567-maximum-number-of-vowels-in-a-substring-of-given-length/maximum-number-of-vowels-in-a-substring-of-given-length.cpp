class Solution {
public:
    bool isvol(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {
        int st = 0, end = 0, maxy = INT_MIN;
        int c = 0;
        int volc = 0;
        while (end < s.size()) {
            c++;
            if (isvol(s[end])) {
                volc++;
            }

            if (c == k) {
                c--;
                maxy = max(maxy, volc);
                if (isvol(s[st])) {
                    volc--;
                }
                st++;
            }

            end++;
        }
        return maxy;
    }
};