class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        // int sub = 0;
        long long minDiff = LLONG_MAX;
        int n = nums.size();
        long long left = 0;

        for (int i = 0; i < nums.size(); i++) {
            left += nums[i];
            sum -= nums[i];
            long long leftAvg = left / (i + 1);
            // long long rightAvg = rightAvg - (n - i - 1);

             long long rightAvg;
            if (i == n - 1) {
                rightAvg = 0;
            } else {
                rightAvg = sum / (n - i - 1);
            }


           long long sub = abs(leftAvg - rightAvg);
           
           if(sub <minDiff)
           {
            minDiff =sub;
            ans=i;
           }
        }
        return ans;
    }
};