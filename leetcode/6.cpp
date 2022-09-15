#include <iostream>
#include <string>
#include <vector>

class Solution{
    public:
        std::string convert(std::string str, int numRows){
            std::string ans = ""; 
            int i = 0, n = str.size();
            std::vector<std::string> tempAns(numRows, "");
            while(i < n){
                for(int j = 0; j < numRows && i < n; ++j, ++i)
                    tempAns[j] += str[i];
                for(int j = numRows - 2; j >= 1 && i < n; --j, ++i)
                    tempAns[j] += str[i];
            }
            for(int j = 0; j < numRows; ++j)
                ans += tempAns[j];
            return ans;
        }
};

int main(void){
    std::string testString = "PAYPALISHIRING";
    int numRows = 4;
    Solution solution;
    std::cout << solution.convert(testString, numRows) << std::endl;
    return 0;
}
