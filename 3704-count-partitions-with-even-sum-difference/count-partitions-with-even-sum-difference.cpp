class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size(); i++)
        {
             sum += nums[i];
        }
        int left =0;
        int count=0;
         for(int i=0;i<nums.size()-1; i++)
        {
             left += nums[i];
            sum -= nums[i];
            int div = left -sum;

             if(div % 2 == 0)
             {
                count++;
             }
        }

      return  count;
    }
};