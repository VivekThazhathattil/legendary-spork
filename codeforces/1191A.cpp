#include <iostream>

int main(void){
    int n;
    std::cin >> n;
    if(n % 4 == 1)
        std::cout << "0 A";
    else if(n % 4 == 2)
        std::cout << "1 B";
    else if(n % 4 == 3)
        std::cout << "2 A";
    else
        std::cout << "1 A";
    return 0;
}
