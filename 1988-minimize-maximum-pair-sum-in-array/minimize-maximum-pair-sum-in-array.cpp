class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() ,nums.end());

        int maxval=INT_MIN;
        int st=0;
        int end=nums.size()-1;

        while(st<end)
        {
          int sum = nums[st]+nums[end];
          maxval = max(maxval,sum);
          st++;
          end--;
        }

        return maxval;
    }
};