#include <iostream>
#include <string>

int main(void){
    int n, k;
    std::cin >> n >> k;
    std::string str;
    std::cin >> str;
    int count = 0, i = 0;
    while(i < k){
        if(count >= k/2)
            std::cout << ")";
        else{
            if(str[i] == '(')
                ++count;
            std::cout << str[i];
        }
        ++i;
    }
    return 0;

}
