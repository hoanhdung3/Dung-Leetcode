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
     * @return Boolean
     */
    function isValidBST($root) {
        return $this->check($root, PHP_INT_MIN, PHP_INT_MAX);
    }
    
    function check($node, $min, $max){
        if($node==NULL) return true;
        if(!($node->val<$max && $node->val>$min)) return false;
        return $this->check($node->left, $min, $node->val) && $this->check($node->right, $node->val, $max);
    }
}
