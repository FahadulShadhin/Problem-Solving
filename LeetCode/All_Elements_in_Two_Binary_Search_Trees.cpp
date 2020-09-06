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
    void traverse_tree(TreeNode* root, vector<int>& nodes) {
        if(root == NULL) return;
        traverse_tree(root->left, nodes);
        traverse_tree(root->right, nodes);
        nodes.push_back(root->val);
    }    
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> nodes;
        traverse_tree(root1, nodes);
        traverse_tree(root2, nodes);
        
        //for(auto i: nodes) cout << i << " ";
        sort(nodes.begin(), nodes.end());
        return nodes;
    }
};