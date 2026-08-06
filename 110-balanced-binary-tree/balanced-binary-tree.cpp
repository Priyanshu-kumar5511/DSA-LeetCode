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
    int Height(TreeNode* root, int &val)
    {
        if(!root)
        {
            return 0;

        }

        int l = Height(root->left,val);
        int r =Height(root->right,val);

        if(abs(l-r) > 1)
        {
            val=0;
        }

        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
       int val=1;
       Height(root,val);
       return val;
    }
};