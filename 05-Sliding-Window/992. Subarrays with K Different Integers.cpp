class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        // Exactly(k) = AtLeast(k) - AtLeast(k+1)

        unordered_map<int, int> mp;
        int st = 0, end = 0, total = 0, count = 0;

        // Count subarrays with AtLeast(k) distinct
        while (end < nums.size()) {

            mp[nums[end]]++;
            if (mp[nums[end]] == 1)
                count++;

            while (count == k) {

                // All extensions are also valid
                total += nums.size() - end;

                mp[nums[st]]--;
                if (mp[nums[st]] == 0)
                    count--;

                st++;
            }

            end++;
        }

        // Count subarrays with AtLeast(k+1) distinct
        st = 0;
        end = 0;
        count = 0;
        k++;
        mp.clear();

        while (end < nums.size()) {

            mp[nums[end]]++;
            if (mp[nums[end]] == 1)
                count++;

            while (count == k) {

                // Remove extra count
                total -= nums.size() - end;

                mp[nums[st]]--;
                if (mp[nums[st]] == 0)
                    count--;

                st++;
            }

            end++;
        }

        return total;
    }
};