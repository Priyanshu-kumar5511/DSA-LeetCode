class Solution {
public:

    int solve(string& s, int st, int end, int k)
    {
        if(st > end)
            return 0;

        unordered_map<char, int> mp;

        // _________Current substring ki frequency___
        for(int i = st; i <= end; i++)
        {
            mp[s[i]]++;
        }

        // --------Invalid character dhundo-------
        for(int i = st; i <= end; i++)
        {
            if(mp[s[i]] < k)
            {
                int left = solve(s, st, i - 1, k);
                int right = solve(s, i + 1, end, k);

                return max(left, right);
            }
        }

        // ------Sab characters ki frequency >= k-----
        return end - st + 1;
    }

    int longestSubstring(string s, int k)
    {
        return solve(s, 0, s.size() - 1, k);
    }
};