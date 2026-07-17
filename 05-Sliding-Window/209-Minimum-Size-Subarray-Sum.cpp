#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {

                sum += nums[j];
                if (sum >= target) {
                    ans = min(ans, j - i + 1);

                    break;
                }
            }
        }

        return ans == INT_MAX ? 0 : ans;   // y bhi coorec hain y bs o(N2) lega time
    }
};





// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {

//         int n = nums.size();
//         int ans = INT_MAX;
//          int sum = 0;
//          int count=0;
//         for (int i = 0; i < n; i++) {

//                 sum += nums[i];
//                 while(sum >= target) {

//                     ans = min(ans, i - count + 1);
//                     sum -= nums[count];
//                     count++;

//                 }
//             }
        

//         return ans == INT_MAX ? 0 : ans;       /// y bhi correct y prefix sum  s kiye hain
//     }
// };







// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//        int st=0,end=0;
//        int miny=INT_MAX;
//        int sum=0;
//        while(end<nums.size())
//        {
//             sum += nums[end];
//             while(sum>=target)
//             {
//                  miny=min(miny,end-st+1);
//                 sum -= nums[st];
//                 st++;
//             }
               
            
//             end++;
//        }

//        return miny==INT_MAX ?  0 : miny;  // y bhi correct hain y sliding windo s kiye hain 
//     }
// };