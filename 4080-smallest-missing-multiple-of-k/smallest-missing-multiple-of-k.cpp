class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size() ;i++)
        {
            if(nums[i] % k ==0 )
            {
                mp[nums[i]]++;
            }
        }

        for(int i=k ; ;i +=k)
        {
            if(mp.find(i) == mp.end())
            {
                return i;
                
            }
           
        }

        return 0;
    }
};