/* You are given two integers n and k.

A positive integer x is called compatible if it satisfies both of the following conditions:

abs(n - x) <= k
(n & x) == 0
Return the sum of all compatible integers x.

Note:

Here, & denotes the bitwise AND operator.
The absolute difference between integers i and j is defined as abs(i - j). */
class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int count =0;
        for(int i=max(0,n-k);i<=n+k;i++){
            if((i&n)==0) count+=i;
        }
        return count;
    }
};