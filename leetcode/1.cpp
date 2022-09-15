#include <iostream>
#include <vector>
#include <unordered_map>

class Solution{
    public:
        std::vector<int> findTwoSum(std::vector<int>& nums, int target){
            std::unordered_map<int, int> umap;
            for(int i = 0; i < nums.size(); ++i){
                if(umap.find(target - nums[i]) == umap.end()){
                    umap[nums[i]] = i;
                }
                else
                    return {umap[target - nums[i]], i};
            }
            return {-1, -1};
        }
};

int main(void){
    int target, n;
    std::cin >> n >> target;
    std::vector<int> nums(n);
    for(int i = 0; i < n; ++i)
        std::cin >> nums[i];
    Solution solution;
    std::vector<int> result = solution.findTwoSum(nums, target);
    std::cout << result[0] << " " << result[1];
    return 0;
}
