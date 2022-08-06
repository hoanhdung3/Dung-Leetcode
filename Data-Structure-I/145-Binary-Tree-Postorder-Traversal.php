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
    function postorderTraversal($root) {
        $arr = [];
        $this->postorder($root, $arr);
        return $arr;
    }
    
    function postorder($node, &$arr){
        if(!$node) return;
        $this->postorder($node->left, $arr);
        $this->postorder($node->right, $arr);
        $arr[] = $node->val;
    }
}
