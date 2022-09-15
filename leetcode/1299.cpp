#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> replaceElements(std::vector<int>& arr) {
        if(arr.size() == 1)
            return {-1};
        std::vector<int> soln(arr.size());
        int max_element = -1;
        soln[arr.size() - 1] = max_element;
        for(int i = arr.size() - 2; i >= 0; --i){
            if(max_element < arr[i + 1]) 
                max_element = arr[i + 1];
            soln[i] = max_element;
        }
        return soln;
    }
};

int main(){
    //std::vector<int> test_input = {17, 18, 5, 4, 6, 1};
    std::vector<int> test_input = {400};
    Solution solution;
    std::vector<int> test_output = solution.replaceElements(test_input);
    for(int i = 0; i < test_output.size(); ++i)
        std::cout << test_output[i] << " ";
    std::cout << std::endl;
    return 0;
}
