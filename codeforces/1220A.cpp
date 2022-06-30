#include <iostream>
#include <string>

int main(void){
    int n;
    std::cin >> n;
    std::string str;
    std::cin >> str;
    int count_zeros = 0, count_ones = 0;
    for(int i = 0; i < n; ++i){
        if(str[i] == 'z')
            ++count_zeros;
        if(str[i] == 'n')
            ++count_ones;
    }
    for(int i = 0; i < count_ones; ++i)
        std::cout << "1 ";
    for(int i = 0; i < count_zeros; ++i)
        std::cout << "0 ";
    return 0;
}
