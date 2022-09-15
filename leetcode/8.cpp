#include <iostream>
#include <string>
#include <cstdbool>
#include <climits>
#include <vector>

class Solution{
    private:
        void removeLeadingWhiteSpace(std::string &str){
            while(str.length() != 0){
                if(str[0] != ' ')
                    break;

                str.erase(0, 1);
            }
            return;
        }

        bool isNegative(std::string &str){
            if(str.length() == 0)
                return false;
            if(str[0] == '-'){
               str.erase(0, 1); 
                return true;
            }
            if(str[0] == '+')
                str.erase(0, 1);
            return false;
        }

        std::vector<int> getDigits(std::string &str){
            int i = 0;
            std::vector<int> result;
            while(i < str.length()){
               if(str[i] >= '0' && str[i] <= '9') {
                   result.push_back(str[i] - '0');
                   ++i;
               }
               else
                   break;
            }
            while(result.size()){
                if(!result[0]) result.erase(result.begin());
                else break;
            }

            return result;
        }

        int joinDigits(std::vector<int> &digits, int maxN){
            int result = 0;
            for(int i = 0; i < maxN && i < digits.size(); ++i)
                result = result*10 + digits[i];
            return result;
        }

        int getResultNumber(std::vector<int> &digits, bool isNegative){
            int result = 0;
            if(digits.empty())
                return 0;

            result = joinDigits(digits, 9);
            if(digits.size() > 10)
                return (isNegative) ? INT_MIN : INT_MAX;
            if(digits.size() == 10){
                if(result > INT_MAX/10)
                    return (isNegative) ? INT_MIN : INT_MAX;
                else if(result == INT_MAX/10){
                    if(isNegative){
                        if(digits[9] > 8)
                            return INT_MIN;
                        else
                            return -result*10 - digits[9];
                    }
                    else{
                       if(digits[9] > 7)
                            return INT_MAX;
                       else
                           return joinDigits(digits, 10);
                    }
                }
                else
                    return isNegative ? -joinDigits(digits, 10) : joinDigits(digits, 10);
            }

            return isNegative ? -result : result;
        }

    public:
       int myAtoi(std::string str){
            removeLeadingWhiteSpace(str);
            bool neg = isNegative(str);
            std::vector<int> digits = getDigits(str);
            return getResultNumber(digits, neg);
       }
};

int main(void){
    std::string testString = "    -4193 with words";
    Solution solution;
    std::cout << solution.myAtoi(testString) << std::endl;
    std::cout << solution.myAtoi("") << std::endl;
    std::cout << solution.myAtoi("42") << std::endl;
    std::cout << solution.myAtoi("   -42") << std::endl;
    std::cout << solution.myAtoi(" 1192820738r2") << std::endl;
    std::cout << solution.myAtoi(" -1010023630o4") << std::endl;
    return 0;
}
