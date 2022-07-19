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
 
 // solution 1:
class Solution {

    /**
     * @param TreeNode $root
     * @param Integer $val
     * @return TreeNode
     */
    function insertIntoBST($root, $val) {
        if($root==NULL) return new TreeNode($val);
        if($root->val > $val) $root->left = $this->insertIntoBST($root->left, $val);
        else $root->right = $this->insertIntoBST($root->right, $val);
        return $root;
    }
}

// solution 2:
class Solution {

    /**
     * @param TreeNode $root
     * @param Integer $val
     * @return TreeNode
     */
    function insertIntoBST($root, $val) {
        if($root==NULL) return new TreeNode($val);
        $curr = $root;
        while(true){
            if($curr->val > $val){
                if($curr->left)
                    $curr = $curr->left;
                else{
                    $curr->left = new TreeNode($val);
                    break;
                }
            }
            else{
                if($curr->right)
                    $curr = $curr->right;
                else{
                    $curr->right = new TreeNode($val);
                    break;
                }
            }
        }
        return $root;
    }
}
