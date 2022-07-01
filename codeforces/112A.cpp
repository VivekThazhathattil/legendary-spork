#include <iostream>
#include <string>

void to_lowercase(std::string& s){
    for(int i = 0; i < s.size(); ++i)
        if('A' <= s[i] && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    return;
}

int main(void){
    std::string str1, str2; 
    std::cin >> str1 >> str2;
    to_lowercase(str1);
    to_lowercase(str2);
    if(str1 == str2)
        std::cout << 0;
    else if(str1 < str2)
        std::cout << -1;
    else
        std::cout << 1;
    return 0;
}
