class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v(rowIndex+1, 1);
        long c = 1;
        for(int i=1; i<rowIndex; ++i){
            c = c * (rowIndex - i + 1) / i;
            v[i] = c;
        }
        return v;
    }
};
/*
The elements of the ith line of pascal triangle is the coefficients of the expansion of

(a + b) ^ i

For example, the 4th line:

1 4 6 4 1
(a + b) ^ 4 = a^4 + 4a^3b + 6a^2b^2 + 4ab^3 + b^4

The coefficients are respectively C(4, 0), C(4, 1), C(4, 2), C(4, 3), C(4, 4).
=> C(n, i) = C(n, n - i)
*/
