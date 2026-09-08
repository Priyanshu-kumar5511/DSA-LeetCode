class Solution {
public:

    void check(vector<int>nums, int i ,int n, vector<int>current,  vector<vector<int>>&ans)
    {
        if(n==i)
        {
           ans.push_back(current);
            return ;
        }

     current.push_back(nums[i]);
     
     check(nums,i+1,n,current,ans);
     current.pop_back();

     int idx=i+1;
     while(idx<n && nums[idx]==nums[idx-1])
     {
       idx++;
     }

     check(nums,idx,n,current,ans);


    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<int>current;
        vector<vector<int>>ans;

        check(nums, 0 , nums.size(),current , ans);
        return ans;
    }
};