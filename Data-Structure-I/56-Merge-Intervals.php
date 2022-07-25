class Solution {

    /**
     * @param Integer[][] $intervals
     * @return Integer[][]
     */
    function merge($intervals) {
        sort($intervals);
        $len_i = count($intervals);
        for($i=0; $i<$len_i; ++$i){
            [$start, $end] = $intervals[$i];
            [$start2, $end2] = $intervals[$i + 1];
            if($end >= $start2){
                unset($intervals[$i]);
                $intervals[$i+1] = [$start, max($end, $end2)];
            }
        }
        return $intervals;
    }
}
