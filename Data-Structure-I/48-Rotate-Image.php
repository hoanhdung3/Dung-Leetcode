class Solution {

    /**
     * @param Integer[][] $matrix
     * @return NULL
     */
    function rotate(&$matrix) {
        $l = 0;
        $r = count($matrix) - 1;
        while($l < $r){
            for($i=0; $i<$r-$l; ++$i){
                $t = $l;
                $b = $r;
            
                $topLeft = $matrix[$t][$l + $i];
                
                $matrix[$t][$l + $i] = $matrix[$b - $i][$l];
                $matrix[$b - $i][$l] = $matrix[$b][$r - $i];
                $matrix[$b][$r - $i] = $matrix[$t + $i][$r];
                $matrix[$t + $i][$r] = $topLeft;
            }
            ++$l;
            --$r;
        }
    }
}
