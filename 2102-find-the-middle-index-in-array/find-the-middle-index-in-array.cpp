class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size() ;i++)
        {
            sum += nums[i];
        }
        int left=0;

        for(int i=0;i<nums.size() ;i++)
        {
            int zero = sum - left -nums[i];

            if(zero == left )
            {
                return i;
            }

            left +=nums[i];
        }
        return -1;
    }
};