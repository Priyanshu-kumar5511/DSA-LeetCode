class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(), nums.end());
        int mul;
        int p=nums[n-1] - 1;
        int q = nums[n-2] -1;
            mul= p*q ;
 return mul;
    }
   
};