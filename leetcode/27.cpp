#include <iostream>
#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val);
};

int Solution::removeElement(std::vector<int>&nums, int val){
    int lastWriteIndex = -1, countValElement = 0; 
    for(int i = 0; i < nums.size(); ++i){
        if(nums[i] != val){
            ++lastWriteIndex;
            nums[lastWriteIndex] = nums[i];
        }
        else
            ++countValElement;
    }
    return nums.size() - countValElement;
}

int main(void){
    std::vector<int> testVec = {3, 2, 2, 3};
    int testVal = 2;
    Solution solution;
    int numElements = solution.removeElement(testVec, testVal);
    std::cout << numElements << std::endl;

    for(int i = 0; i < numElements; ++i)
        std::cout << testVec[i] << " ";
    std::cout << std::endl;
    return 0;
}
