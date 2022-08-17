// sollution1:

class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function majorityElement($nums) {
        $map = [];
        $max_count = 0;
        $ans = 0;
        foreach($nums as $i){
            $map[$i]++;
            if($map[$i] > $max_count) $ans = $i;
            $max_count = max($max_count, $map[$i]);
        }
        return $ans;
    }
}

// solution 2:
class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function majorityElement($nums) {
        $ans = $nums[0];
        $count = 1;
        for($i=1; $i<count($nums); ++$i){
            if($ans == $nums[$i]) $count++;
            else $count--;
            if($count==0){
                $count=1;
                $ans = $nums[$i];
            }
        }
        return $ans;
    }
}
