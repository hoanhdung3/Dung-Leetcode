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
    function preorder($node, &$arr){
        if(is_null($node)) return;
        array_push($arr, $node->val);
        $this->preorder($node->left, $arr);
        $this->preorder($node->right, $arr);
    }
    function preorderTraversal($root) {
        $arr = [];
        $this->preorder($root, $arr);
        return $arr;
    }
}
