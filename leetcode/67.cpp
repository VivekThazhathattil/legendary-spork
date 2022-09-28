#include <iostream>
#include <string>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        while(i != j){
            if(i < j){
                ++i;
                a = "0" + a;
            }
            else {
                ++j;
                b = "0" + b;
            }
        }
        int carry = 0;
        std::string ans = "";
        while(i >= 0){
            if(a[i] != b[i]){
                ans = (carry ? "0" : "1") + ans;
            }
            else{
                if(a[i] - '0'){
                    if(carry)
                        ans = "1" + ans;
                    else{
                        ans = "0" + ans;
                        carry = 1;
                    }
                }
                else{
                    if(carry){
                        ans = "1" + ans;
                        carry = 0; 
                    }
                    else ans = "0" + ans;
                }
            }
           --i; 
        }
        if(carry)
            ans = "1" + ans;
        return ans;
    }
};

int main(void){
    Solution soln;
    std::cout << soln.addBinary("11", "1") << std::endl;
    return 0;
}
