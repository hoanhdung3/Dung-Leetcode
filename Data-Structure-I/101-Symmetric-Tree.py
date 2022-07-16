# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return true
        return self.check(root.left, root.right)
    
    def check(self, left: Optional[TreeNode], right: Optional[TreeNode]) -> bool:
        if not left or not right:
            return left==right
        if left.val != right.val:
            return False
        return self.check(left.left, right.right) and self.check(left.right, right.left)
