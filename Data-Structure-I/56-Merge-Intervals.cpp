class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> v;
        v.push_back(intervals[0]);
        int n = 0;
        int start, start2, end, end2;
        int len_i = intervals.size();
        for(int i=0; i<len_i - 1; ++i){
            start = v[n][0];
            end = v[n][1];
            start2 = intervals[i+1][0];
            end2 = intervals[i+1][1];
            if(start2<=end){
                if(end2>=end){
                    v.pop_back();
                    v.push_back({start, end2});
                }
            }
            else{
                v.push_back({start2, end2});
                n++;
            }
        }
        return v;
    }
};
