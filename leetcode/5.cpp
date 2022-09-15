#include <iostream>
#include <vector>
#include <string>
#include <cstdbool>

// TLE biatch!
/*class Solution{
    public:
        std::string longestPalindrome(std::string& str){
            int n = str.size();

            if(n < 1)
                return "";

            std::string ans(1, str[0]);

            std::vector<std::vector<bool>> dp(n, std::vector<bool>(n, false));
            
            // dp[i][j] == true if substring of str from pos i to pos j is a palindrome.
            // all single character strings are palindromes themselves.
            for(int i = 0; i < n; ++i)
                dp[i][i] = true;

            for(int i = n - 1; i >= 0; --i){
                for(int j = i + 1; j < n; ++j){
                    if(str[i] == str[j])
                        if(dp[i + 1][j - 1] || j - i == 1){
                            dp[i][j] = true; 
                            ans = (ans.size() < j - i + 1) ? str.substr(i, j - i + 1) : ans;
                        }
                }
            }
            return ans;
        }
};*/

class Solution{
    private:
        int palindrome(std::string s, int left, int right){
            while(left >= 0 && right < s.length() && s[left] == s[right]){
                --left;
                ++right;
            }
            return right - left - 1;
        }

    public:
       std::string longestPalindrome(std::string str){
           int maxLen = 0;
           int left = 0, right = 0;
           for(int i = 0; i < str.length(); ++i){
               int len1 = palindrome(str, i, i); 
               int len2 = palindrome(str, i, i + 1);
               int len = (len1 > len2) ? len1 : len2;
               if(len > maxLen){
                    maxLen = len;
                    left = i - (len - 1)/2;
               }
           }
           return str.substr(left, maxLen);
       }
};

int main(void){
    //std::string testString = "aacabdkacaa";
    std::string testString = "vivek";
    Solution solution;
    std::cout << solution.longestPalindrome(testString) << std::endl;
    return 0;
}
