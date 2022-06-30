#include <iostream>
#include <string>

int main(void){
    int n;
    std::cin >> n;
    std::string str; 
    std::cin >> str;
    int sf = 0, fs = 0; 
    for(int i = 0; i < n - 1; ++i){
        if(str[i] == 'S' && str[i + 1] == 'F')  ++sf;
        else if(str[i] == 'F' && str[i + 1] == 'S') ++fs;
    }
    if(sf > fs)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
