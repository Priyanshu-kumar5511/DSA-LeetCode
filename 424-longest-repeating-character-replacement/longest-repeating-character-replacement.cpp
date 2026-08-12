class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int st = 0, end = 0, maxfrq = INT_MIN;
        // int rem = 0;
        int ans = 0;

        while (end < s.size()) {
            mp[s[end]]++;
            maxfrq = max(maxfrq, mp[s[end]]);
            int len = end - st + 1;

            int rem = len - maxfrq;

            if (rem <= k) {
                ans = max(ans, len);
            }

            else {
                mp[s[st]]--;
                st++;
            }
            end++;
        }
    
    return ans;
 }
};