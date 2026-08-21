class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int mid = nums.size() / 3;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<int> ans;
        for (auto& i : mp) {
            if (i.second > mid) {
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};