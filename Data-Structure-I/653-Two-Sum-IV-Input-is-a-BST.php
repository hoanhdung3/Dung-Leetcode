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
    private $s = [];
    /**
     * @param TreeNode $root
     * @param Integer $k
     * @return Boolean
     */
    function findTarget($root, $k) {
        if($root==NULL) return false;
        if(in_array($k - $root->val, $this->s)) return true;
        else $this->s[] = $root->val;
        return $this->findTarget($root->left, $k) || $this->findTarget($root->right, $k);
    }
}
