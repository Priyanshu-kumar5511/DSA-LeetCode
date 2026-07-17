#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            int rem = target -nums[i];
            if(mp.find(rem) != mp.end())
            {
                return {mp[rem] , i};
            }
            mp[nums[i]]=i;
        }

        return {};
    }
};

int main()
{
    Solution s;
    vector<int>nums={2,4,5,2,6,7};
    int target = 9;
    vector<int>ans = s.twoSum(nums,target);
    for(int i=0;i<ans.size() ;i++)
    {
        cout<<ans[i]<<" ";
    }
}