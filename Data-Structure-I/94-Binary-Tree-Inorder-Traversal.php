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
     * @return Integer[]
     */
    function inorderTraversal($root) {
        $arr = [];
        $this->inorder($root, $arr);
        return $arr;
    }
    
    function inorder($node, &$arr){
        if(!$node) return;
        $this->inorder($node->left, $arr);
        $arr[] = $node->val;
        $this->inorder($node->right, $arr);
    }
}
