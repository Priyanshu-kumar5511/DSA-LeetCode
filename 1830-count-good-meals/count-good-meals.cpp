// class Solution {
// public:
//     int countPairs(vector<int>& nums) {
//         int count = 0;

//         for (int i = 0; i < nums.size(); i++) {
//             int sum = 0;
//             for (int j = i+1; j < nums.size(); j++) {
//                 sum = nums[i] + nums[j];

//                 while (sum % 2 == 0) {
//                     sum /= 2;
//                 }

//                 if (sum == 1) {
//                     count++;
//                 }
//             }
//         }

//         return count;
//     }
// };  // TLE AA RHAHA HAIN

class Solution {
public:
    int countPairs(vector<int>& nums) {

        unordered_map<int, int> mp;
        long long count = 0;
        const int MOD = 1e9 + 7;
        int i = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int power = 1; power <= (1 << 21); power <<= 1) {
                int rem = power - nums[i];
                if (mp.find(rem) != mp.end()) {

                    count = (count + mp[rem]) % MOD; 
                }
            }
             mp[nums[i]]++;
        }

        return count;
    }
};
