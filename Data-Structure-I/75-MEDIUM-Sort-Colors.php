class Solution {

    /**
     * @param Integer[] $nums
     * @return NULL
     */
    function sortColors(&$nums) {
        $beg = 0; 
        $run = 0;
        $end = count($nums) - 1;
        while($run <= $end){
            if($nums[$run] == 2){
                $tmp = $nums[$run];
                $nums[$run] = $nums[$end];
                $nums[$end] = $tmp;
                $end--;
            }
            else if($nums[$run] == 0){
                $tmp = $nums[$run];
                $nums[$run] = $nums[$beg];
                $nums[$beg] = $tmp;
                $beg++;
                $run++;
            }
            else $run++;
        }
    }
}
