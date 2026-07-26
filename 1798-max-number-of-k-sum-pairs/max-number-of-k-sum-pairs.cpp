class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int fin = k - nums[i];
            if (mp.find(fin) != mp.end()) {
               
                count++;
                mp[fin]--;
                 if (mp[fin] == 0) {
                    mp.erase(fin);
                }
            } else {
                mp[nums[i]]++;
            }
        }

        return count;
    }
};