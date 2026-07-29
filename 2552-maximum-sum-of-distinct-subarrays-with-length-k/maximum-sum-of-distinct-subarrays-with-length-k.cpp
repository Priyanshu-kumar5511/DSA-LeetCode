class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        int st = 0, end = 0, count = 0;
        long long sum = 0;
        long long maxy = 0;

        while (end < nums.size()) {

            sum += nums[end];

            mp[nums[end]]++;

            while (end - st + 1 > k) {

                sum -= nums[st];

                mp[nums[st]]--;

                if (mp[nums[st]] == 0) {
                    mp.erase(nums[st]);
                }


                st++;
            }

             if ((end - st + 1 == k) && (mp.size() == k)) {
                maxy = max(maxy, sum);
            }
            

            end++;
        }

        return maxy;
    }
};