# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        self.s = set()
        return self.check(root, k)
    def check(self, node, k):
        if not node:
            return False
        x = k - node.val
        if x in self.s:
            return True
        else:
            self.s.add(node.val)
        return self.check(node.left, k) or self.check(node.right, k)
        
