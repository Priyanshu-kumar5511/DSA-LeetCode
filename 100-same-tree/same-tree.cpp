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
    bool isSameTree(TreeNode* root1, TreeNode* root2) {

        // queue<TreeNode*> q1;
        // queue<TreeNode*> q2;

        // if (!root1 && !root2) {
        //     return true;
        // }
        // q1.push(root1);
        // q2.push(root2);

        // while (!q1.empty() && !q2.empty()) {
        //     TreeNode* temp1 = q1.front();
        //     TreeNode* temp2 = q2.front();
        //     q1.pop();
        //     q2.pop();

        //     if (!temp1 && !temp2) {
        //         continue;
        //     }
        //     if (!temp1 || !temp2) {
        //         return false;
        //     }

        //     if (temp1->val != temp2->val) {
        //         return false;
        //     }

        //     q1.push(temp1->left);
        //     q2.push(temp2->left);

        //     q1.push(temp1->right);
        //     q2.push(temp2->right);
        // }
        // return q1.empty() && q2.empty();


         if (root1 == NULL && root2 == NULL) {
            return true;
        }
       
       if( (!root1 && root2) ||(root1 && !root2) )
       {
          return false;
       }

        if (root1->val != root2->val) {
            return false;
        }
        
        
        return isSameTree(root1->left, root2->left) && isSameTree(root1->right, root2->right);
    }
};



