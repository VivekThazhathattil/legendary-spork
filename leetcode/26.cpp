#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums);
};

int Solution::removeDuplicates(std::vector<int>& nums){
    int numDuplicates = 0;
    const int marker = -1000;
    /* mark all the duplicates with the same marker value (-1000 here)*/
    for(int i = 0; i < nums.size(); ++i){
        int j = i + 1;
        while(j < nums.size() && nums[j] == nums[i]){
            ++numDuplicates;
            nums[j] = marker;
            ++j;
        }
        i = --j;
    }
    int origIdx = 0, newIdx = 0;
    for(; origIdx < nums.size();){
        if(nums[origIdx] != marker){
            if(nums[newIdx] != nums[origIdx])
                nums[newIdx] = nums[origIdx];
            ++origIdx;
            ++newIdx;
        }
        else{
            while(origIdx < nums.size() && nums[origIdx] == marker)
                ++origIdx;
        }
    }
    return nums.size() - numDuplicates;
}

int main(void){
    //std::vector<int> testVec = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    std::vector<int> testVec = {1, 1, 2};
    Solution solution;
    int k = solution.removeDuplicates(testVec);
    std::cout << k << std::endl;
    for(int i = 0; i < k; ++i)
        std::cout << testVec[i] << " ";
    std::cout << std::endl;
    return 0;
}
