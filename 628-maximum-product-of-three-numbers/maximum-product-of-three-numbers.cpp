class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int option1 = nums[n - 1] * nums[n - 2] * nums[n - 3];

        int option2 = nums[0] * nums[1] * nums[n - 1];

        return max(option1, option2);
    }
};

// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {

//         int count = 0;
//         int st = 0, end = 0, sum = 1;
//        int maxy=INT_MIN;
//         while (end < nums.size()) {

//              sum *= nums[end];
//                count++;
//              while(count==3)
//              {
//                 maxy =max(maxy,sum);
//                 count--;
//                 sum -nums[st];
//                 st++;
//              }
//              end++;

//         }

//         return maxy;
//     }
// };