#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        std::vector<int> ans;

        // idea: onion peel
        int currLayer = 0;

        while(1){
            // iterate left
            for(int j = currLayer + 0; j < n - currLayer && ans.size() < m*n; ++j)
                ans.push_back(matrix[0 + currLayer][j]);
            if(ans.size() >= m*n) break;

            // iterate down
            for(int i = 1 + currLayer; i < m - 1 - currLayer && ans.size() < m*n; ++i)
                ans.push_back(matrix[i][n - 1 - currLayer]);
            if(ans.size() >= m*n) break;

            // iterate right
            for(int j = n - 1 - currLayer; j >= 0 + currLayer && ans.size() < m*n; --j)
                ans.push_back(matrix[m - 1 - currLayer][j]);
            if(ans.size() >= m*n) break;

            // iterate up
            for(int i = m - 2 - currLayer; i >= 1 + currLayer && ans.size() < m*n; --i)
                ans.push_back(matrix[i][0 + currLayer]);
            if(ans.size() >= m*n) break;

            ++currLayer;
        }
        return ans;
    }
};

int main(void){
    std::vector<std::vector<int>> testMatrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    Solution soln;
    std::vector<int> testResult = soln.spiralOrder(testMatrix);
    std::cout << testResult.size() << std::endl;
    for(int i = 0; i < testResult.size(); ++i)
        std::cout << testResult[i] << " ";
    std::cout << std::endl;
    return 0;
}
