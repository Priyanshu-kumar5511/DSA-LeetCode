class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;

        int st=0,end=0;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
       
       int ans=-1;
        for(auto& i:mp)
        {
           ans=max(ans,i.second);
        }
       
       int sum=0;
       for(auto& i:mp)
       {
         if(ans== i.second)
         {
           sum += i.second;
         }
       }
        return sum;
    }
};