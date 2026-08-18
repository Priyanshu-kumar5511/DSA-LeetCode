class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int st=0,end=0, count=0;

        while(end<nums.size())
        {
           count++;

           if(count==k)
           {
            unordered_set<int>seen;
            int r=count;
            int l=st;

            while(r--)
            {
                if(seen.find(nums[l]) == seen.end())
                    {
                        mp[nums[l]]++;
                        seen.insert(nums[l]);
                    }

                l++;
            }
            count--;
            st++;

           }
           end++;

        }
      int ans = -1;


        for(auto& i :mp )
        {
            if(i.second==1)
            {
               ans = max(ans, i.first);
            }
        }

    return ans;
    }
};