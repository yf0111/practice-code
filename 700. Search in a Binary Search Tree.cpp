/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* now=root;
        while(now!=NULL){
            if(val==now->val){
                break;
            }
            if(val> now->val){
                now=now->right;
            }
            else if(val< now->val){
                now=now->left;
            }
        }
        return now;
   }
};