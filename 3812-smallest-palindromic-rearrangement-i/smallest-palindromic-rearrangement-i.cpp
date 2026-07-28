class Solution {
public:
    string smallestPalindrome(string s) {

        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        string left = "";
        char mid = ' ';
        for (char ch = 'a'; ch <= 'z'; ch++) {
            left.append(mp[ch] / 2, ch);

            if (mp[ch] % 2 == 1) {
                mid = ch;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());
        if (mid != ' ') {
            return left + mid + right;
        }

        return left + right;
    }
};