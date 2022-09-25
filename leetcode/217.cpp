#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstdbool>

class Solution {
    private:
        std::unordered_map<int, bool> hasOccured;
    public:
        bool containsDuplicate(std::vector<int>& nums) {
            for(int i = 0; i < nums.size(); ++i){
                if(hasOccured.find(nums[i]) != hasOccured.end()) 
                    return true;
                else
                    hasOccured[nums[i]] = true;
            }
            return false;
        }
};

int main(void){
    std::vector<int> testNums = {1,2,3,4,5,2};
    Solution solution;
    if(solution.containsDuplicate(testNums))
        std::cout << "contains duplicate!" << std::endl;
    return 0;
}

