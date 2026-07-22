class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int miny=nums[i];
            int maxy=nums[i];
            
            for(int j=i ; j<nums.size() ;j++)
            {
                maxy =max(maxy,nums[j]);
                miny =min(miny,nums[j]);
              sum +=  maxy-miny;
            }
        }
        return sum;
    }
};