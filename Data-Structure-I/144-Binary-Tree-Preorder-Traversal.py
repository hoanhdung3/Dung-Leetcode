# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# solution 1:
class Solution:
    def preorder(self, node: Optional[TreeNode], tree_list: Optional[List]):
        if not node:
            return
        tree_list.append(node.val)
        self.preorder(node.left, tree_list)
        self.preorder(node.right, tree_list)

    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        tree_list = []
        self.preorder(root, tree_list)
        return tree_list

# solution 2:
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if not root:
            return []
        return [root.val] + self.preorderTraversal(root.left) + self.preorderTraversal(root.right)


