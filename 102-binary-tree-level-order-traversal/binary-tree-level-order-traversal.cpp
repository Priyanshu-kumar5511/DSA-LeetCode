// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
//  * right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         queue<TreeNode*> q;
//         q.push(root);
//         vector<vector<int>> lever;
//         if (root == NULL) {
//             return lever;
//         }
//         while (!q.empty()) {
//             vector<int> ans;
//             int n = q.size(); 
//             for (int i = 0; i < n; i++) {
//                 TreeNode* temp = q.front();
//                 ans.push_back(temp->val);
//                 q.pop();
//                 if (temp->left != NULL) {
//                     q.push(temp->left);
//                 }
//                 if (temp->right != NULL) {
//                     q.push(temp->right);
//                 }
//             }
//             lever.push_back(ans);
//         }
//         return lever;
//     }
// };





/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root , int i,vector<vector<int>>&ans)
    {
        if(!root)
        {
            return ;
        }

        if( ans.size() == i)
        {
            ans.push_back({});
        }

        ans[i].push_back(root->val);

        dfs(root->left,i+1,ans);
        dfs(root->right,i+1,ans);

        // return ans;

    }

    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> ans;
      dfs(root,0,ans);
      return ans;
    }
};