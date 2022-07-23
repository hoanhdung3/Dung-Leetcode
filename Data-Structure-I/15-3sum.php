class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[][]
     */
    function threeSum($nums) {
        sort($nums);
        $count = count($nums);
        $ans = [];
        for ($index = 0 ; $index <$count ; $index ++) {
            $number = $nums[$index];
            if( $index>0 && $number == $nums[$index-1]) {
                continue;
            }
            $low = $index+1;
            $high = count($nums)-1;
            while ($low<$high)
            {
                $threeSum = $number + $nums[$low] + $nums[$high];
                if($threeSum>0)
                {
                    --$high;
                }

                elseif($threeSum<0) {
                    ++$low;
                }
                else{
                    $ans [] = [$number,$nums[$low],$nums[$high]];
                    ++$low;
                    while (isset($nums[$low],$nums[$low-1])&&$nums[$low] == $nums[$low-1])
                    {
                        ++$low;
                    
                    }
                }
            }
        }
        return $ans;
    }
}
