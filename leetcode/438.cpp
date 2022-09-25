#include <iostream>
#include <vector>
#include <string>

class Solution{
    public:
        std::vector<int> findAnagrams(std::string s, std::string p){
            std::vector<int> ans;
            std::vector<int> phash(26, 0), hash(26, 0);
            int left = 0, right = 0;
            int len = s.length(), window = p.length(); // window: size of the pattern, len: size of the test string 
            if(len < window)
                return ans;
            while(right < window){
                phash[p[right] - 'a']++;
                hash[s[right] - 'a']++;
                ++right;
            }
            --right;
            while(right < len){
                if(phash == hash)
                    ans.push_back(left);
                ++right;
                if(right < len){
                    hash[s[right] - 'a']++;
                    hash[s[left] - 'a']--;
                    ++left;
                }
            }
            return ans;
        }
};

void printAnswer(std::vector<int> ans){
    for(int i = 0; i < ans.size(); ++i)
        std::cout << ans[i] << " ";
    std::cout << std::endl;
}

int main(void){
    std::string testString = "abcacb", testPattern =  "abc";
    Solution solution;
    std::vector<int> ans = solution.findAnagrams(testString, testPattern);
    printAnswer(ans);
    return 0;
}
