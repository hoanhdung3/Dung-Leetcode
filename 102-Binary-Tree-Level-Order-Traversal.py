# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        tree, depth = [], 0
        self.dfs(root, 0, tree)
        return tree
    
    def dfs(self, node: Optional[TreeNode], depth: Optional[int], tree):
        if not node:
            return
        if depth >= len(tree):
            tree.append([])
        tree[depth].append(node.val)
        self.dfs(node.left, depth+1, tree)
        self.dfs(node.right, depth+1, tree)
        
        
