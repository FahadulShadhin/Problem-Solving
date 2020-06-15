# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def get_height(self, root: TreeNode):
        if not root:
            return 0
            
        left_height = self.get_height(root.left)
        right_height = self.get_height(root.right)
        
        self.ans = max(self.ans, left_height + right_height)
        return 1 + max(left_height, right_height)
    
    
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.ans = 0
        self.get_height(root)
        return self.ans
        
