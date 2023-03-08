/* Recursive solution fails bad TLE*/

#include <iostream>
#include <vector>
#include <cstdbool>

class Solution {
    private:
        bool recurseForASolution(std::vector<int>& nums, int currIdx){
            if(currIdx >= nums.size()) return false;
            if(currIdx == nums.size() - 1) return true;
            int n = nums[currIdx];
            if(n == 0) return false;
            for(int i = 1; i <= n; ++i)
                if(recurseForASolution(nums, currIdx + i)) return true;
            return false;
        }
    public:
        bool canJump(std::vector<int>& nums) {
            return recurseForASolution(nums, 0);
        }
};

int main(void){
    Solution soln;
    std::vector<int> testNums = {2,3,1,1,4};
    if(soln.canJump(testNums))
        std::cout << "Can reach end" << std::endl;
    else
        std::cout << "Can't do it chief" << std::endl;
    return 0;
}
