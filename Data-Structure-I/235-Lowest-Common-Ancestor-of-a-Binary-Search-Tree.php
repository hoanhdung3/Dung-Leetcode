/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     public $val = null;
 *     public $left = null;
 *     public $right = null;
 *     function __construct($value) { $this->val = $value; }
 * }
 */

class Solution {
    /**
     * @param TreeNode $root
     * @param TreeNode $p
     * @param TreeNode $q
     * @return TreeNode
     */
    function lowestCommonAncestor($root, $p, $q) {
        $curr = $root;
        while(true){
            if($curr->val<$p->val && $curr->val<$q->val) $curr = $curr->right;
            else if($curr->val>$p->val && $curr->val>$q->val) $curr = $curr->left;
            else return $curr;
        }
    }
}
