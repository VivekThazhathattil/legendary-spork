#include <iostream>
#include <string>

int main(void){
    int n, input;
    std::string output = "EASY";
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        std::cin >> input;
        if(input == 1)
            output = "HARD";
    }
    std::cout << output << std::endl;
    return 0;
}
