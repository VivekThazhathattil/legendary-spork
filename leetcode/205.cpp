#include <iostream>
#include <cstdbool>
#include <string>
#include <unordered_map>

class Solution {
    private:
        std::unordered_map<char, char> s2t;
        std::unordered_map<char, char> t2s;
    public:
        bool isIsomorphic(std::string s, std::string t) {
            if(s.length() != t.length())
                return false;
            for(int i = 0; i < s.length(); ++i){
                if(s2t.find(s[i]) == s2t.end()){
                    s2t[s[i]] = t[i];
                }
                else{
                    if(s2t[s[i]] != t[i])
                        return false;
                }

                if(t2s.find(t[i]) == t2s.end()){
                    t2s[t[i]] = s[i];
                }
                else{
                    if(t2s[t[i]] != s[i])
                        return false;
                }
            }
            return true;
        }
};

int main(void){
    Solution soln;
    std::string testS("badc"), testT("baba");
    if(soln.isIsomorphic(testS, testT))
        std::cout << "True" <<std::endl;
    else
        std::cout << "False" <<std::endl;
    return 0;
}
