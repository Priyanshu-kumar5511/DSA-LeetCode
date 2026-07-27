class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int current_min = nums[0];
        int current_max = nums[0];
        int ans=nums[0];
        for (int i = 1; i < nums.size(); i++) 
        {
            if(nums[i]<0)
            {
                swap(current_min ,current_max);
            }

            current_min = min(nums[i],current_min * nums[i]);
            current_max = max(nums[i],current_max * nums[i]);
           
            ans = max(ans,current_max);
        }
        

        return ans;
    }
};