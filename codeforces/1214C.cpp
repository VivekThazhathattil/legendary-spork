#include <iostream>
#include <string>

int main(void){
    int n;
    std::string str;
    std::cin >> n;
    std::cin >> str;
    int sum = 0, flag = 1;
    for(int i = 0; i < n; ++i){
        if(str[i] == '(')
            ++sum;
        else
            --sum;
        if(sum < -1){
            flag = 0;
            break;
        }
    }
    if(sum != 0)
        flag = 0;
    if(flag)
        std::cout << "Yes";
    else
        std::cout << "No";
    return 0;
}
