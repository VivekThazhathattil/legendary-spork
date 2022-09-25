#include <iostream>
#include <cstdbool>

class Solution{
    public:
        int firstBadVersion(int n){
            int lo = 0, hi = n;
            while(l < r){
                int mid = lo + (hi - lo)/2;
                if(isBadVersion(mid)) hi = mid;
                else lo = mid + 1;
            }
            return lo;
        }
};
