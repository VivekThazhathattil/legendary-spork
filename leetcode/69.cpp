#include <iostream>

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return x;
        if(x < 3)
            return 1;
        int lo = 0, hi = x;
        while(lo < hi){
            long int avg = (lo + hi)/2;
            if(avg*avg == x || avg == lo){
                lo = avg;
                break;
            }
            if(avg*avg < x) lo = avg;
            else hi = avg;
        }
        return lo;
    }
};

int main(void){
    int testNum;
    std::cin >> testNum;
    Solution solution;
    std::cout << solution.mySqrt(testNum) << std::endl;
    return 0;
}
