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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        int depth = 0;
        dfs(root, depth, v);
        return v;
    }
    void dfs(TreeNode* node, int depth, vector<vector<int>>& v){
        if(node==nullptr) return;
        if(depth==v.size()) v.push_back({});
        v[depth].push_back(node->val);
        dfs(node->left, depth+1, v);
        dfs(node->right, depth+1, v);
    }
};
