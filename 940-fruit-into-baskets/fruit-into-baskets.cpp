class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int maxy = 0;
        int st = 0, end = 0;

        while (end < fruits.size()) {
            mp[fruits[end]]++;

            while (mp.size() > 2) {
                // int len = end - st+1 ;

                mp[fruits[st]]--;
                if (mp[fruits[st]] == 0) {
                    mp.erase(fruits[st]);
                }
                st++;
            }
            maxy = max(maxy, end - st + 1);
            end++;
        }
        return maxy;
    }
};