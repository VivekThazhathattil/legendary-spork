#include <iostream>
#include <vector>
#include <string>

class Solution{
    private:
        void addPar(std::vector<std::string>& ans, std::string str, int n, int m){
            if(n == 0 && m == 0){
                ans.push_back(str);
                return;
            }

            if(n > 0) addPar(ans, str + "(", n - 1, m + 1);
            if(m > 0) addPar(ans, str + ")", n, m - 1);
        }
    public:
        std::vector<std::string> generateParantheses(int n){
            std::vector<std::string> res;
            addPar(res, "", n, 0);
            return res;
        }
};

int main(void){
    int testN = 8;
    Solution solution;
    std::vector<std::string> ans = solution.generateParantheses(testN);
    for(int i = 0; i < ans.size(); ++i){
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
