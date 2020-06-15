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
private:
    void insert_into_tree(vector<int>& preorder, TreeNode *root, int nxtIndx) {
        if(preorder[nxtIndx] < root->val) {
            if(root->left == NULL)
                root->left = new TreeNode(preorder[nxtIndx]);
            else
                insert_into_tree(preorder, root->left, nxtIndx);
                                          
        }
        else{
            if(root->right == NULL)
                root->right = new TreeNode(preorder[nxtIndx]);
            else
                insert_into_tree(preorder, root->right, nxtIndx);
        }
    }
    
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        if(n == 0) return NULL;
        TreeNode* root = new TreeNode(preorder[0]);
        for(int i=1; i<n; i++)
            insert_into_tree(preorder, root, i);
        return root;
    }
};