class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxel=INT_MIN;
        for(int i=0;i<nums.size() ;i++)
        {
            maxel= max(maxel,nums[i]);
        }

        int st=0,end=0,count=0;
        long long total=0;
        while(end<nums.size())
        {
            if(nums[end] == maxel)
            {
                count++;
            }
            while(count == k)
            {
                 total += nums.size() -end;
                if(nums[st] == maxel)
                {
                    count--;
                }
                st++;
                
            }
            end++;
        }

        return total;
    }
};