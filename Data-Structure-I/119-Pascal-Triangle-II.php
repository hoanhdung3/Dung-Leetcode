class Solution {

    /**
     * @param Integer $rowIndex
     * @return Integer[]
     */
    function getRow($rowIndex) {
        $arr[0] = 1;
        $c = 1;
        for($i=1; $i<$rowIndex; ++$i){
            $c = $c * ($rowIndex - $i + 1) / $i;
            $arr[$i] = $c;
        }
        $arr[$rowIndex]  = 1;
        return $arr;
    }
}
