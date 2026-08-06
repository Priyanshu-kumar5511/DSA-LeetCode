/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

  void dfs(TreeNode* root , vector<vector<int>>&ans , int i)
  {
    if(!root)
    {
        return ;
    }

    if(ans.size() == i)
    {
        ans.push_back({});
    }
        ans[i].push_back(root->val);
    dfs(root->left,ans,i+1);
    dfs(root->right,ans,i+1);

  }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;

        dfs(root,ans , 0);

        for(int i=1;i<ans.size() ;i +=2)
        {
            reverse(ans[i].begin() ,ans[i].end());
        }
        return ans;
    }
};