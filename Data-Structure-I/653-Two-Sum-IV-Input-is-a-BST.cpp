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
private:
    unordered_set<int> s;
public:
    void addToSet(TreeNode* node)
    {
        if(node == nullptr) return;
        s.insert(node->val);
        addToSet(node->left);
        addToSet(node->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        addToSet(root);
        for(auto it = s.begin(); it != s.end(); it++)
            if(k - *it != *it && s.find(k - *it) != s.end()) return true;
        return false;
    }
};
