// class Solution {
// public:
//    int reversefun(int num) {
//     int rev = 0;
//     while (num > 0) {
//         rev = rev * 10 + (num % 10);
//         num /= 10;
//     }
//     return rev;
// }

//     int minMirrorPairDistance(vector<int>& nums) {
//         int ans = INT_MAX;
                
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                int revs = reversefun(nums[i]);
//                 if (revs == nums[j]) {
//                     ans = min(ans, j - i);
//                 }
//             }
//         }
//          return ans == INT_MAX ? -1 : ans;
//     }
// };


// Time limint 






class Solution {
public:
    int reversefun(int num) {
        int rev = 0;

        while (num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }

        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {

        unordered_map<int, int> mp;
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {

            int rev = reversefun(nums[i]);

            if (mp.find(nums[i]) != mp.end()) {
                ans = min(ans, i - mp[nums[i]]);
            }

            mp[rev] = i;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};



