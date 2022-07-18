/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     public $val = null;
 *     public $left = null;
 *     public $right = null;
 *     function __construct($val = 0, $left = null, $right = null) {
 *         $this->val = $val;
 *         $this->left = $left;
 *         $this->right = $right;
 *     }
 * }
 */
class Solution {

    /**
     * @param TreeNode $root
     * @param Integer $targetSum
     * @return Boolean
     */
    function hasPathSum($root, $targetSum) {
        if(!$root) return false;
        if($root->val==$targetSum && $root->left==NULL && $root->right==NULL) return true;
        return $this->hasPathSum($root->left, $targetSum - $root->val) || $this->hasPathSum($root->right, $targetSum - $root->val);
    }
}
