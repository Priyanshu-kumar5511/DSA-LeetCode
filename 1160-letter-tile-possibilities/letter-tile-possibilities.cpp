class Solution {
public:
    int numTilePossibilities(string tiles) {
        
           unordered_map<char, int> mp;

        for (char c : tiles)
            mp[c]++;

        return solve(mp);

    }



    int solve(unordered_map<char, int>& mp) {
        int count = 0;

        for (auto& p : mp) {
            if (p.second > 0) {
                count++;
                p.second--;

                count += solve(mp);

                p.second++;
            }
        }

        return count;
    }


};