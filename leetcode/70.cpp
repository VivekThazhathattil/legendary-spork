#include <iostream>
#include <unordered_map>

class Solution {
    private:
        std::unordered_map<int, int> knownSolution;
    public:
        int climbStairs(int n) {
            if(n < 1) return 0;
            if(n == 1) return 1;
            if(n == 2) return 2;

            if(knownSolution.find(n) != knownSolution.end())
                return knownSolution[n];
            int ans1 = knownSolution.find(n - 1) != knownSolution.end() ? knownSolution[n-1] : climbStairs(n-1);
            int ans2 = knownSolution.find(n - 2) != knownSolution.end() ? knownSolution[n-2] : climbStairs(n-2);
            int ans = ans1 + ans2;
            knownSolution[n] = ans;
            return ans;
        }
};

int main(void){
    int testNum;
    std::cin >> testNum;
    Solution solution;
    std::cout << solution.climbStairs(testNum) << std::endl;
    return 0;
}
