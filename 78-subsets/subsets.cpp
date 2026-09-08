class Solution {
public:
    void byrecursion( vector<int> nums,int index, int n, vector<int>current,vector<vector<int>> &ans)
    {
        if(index==n)
        {
            ans.push_back(current);
            return ;
        }

       current.push_back(nums[index]);
        byrecursion(nums,index+1,n,current,ans);
        current.pop_back();
         byrecursion(nums,index+1,n,current,ans);


    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>current;
        
           byrecursion(nums,0,nums.size(),current,ans);

           return ans;
        
    }
};