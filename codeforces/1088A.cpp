#include <iostream>

int main(void){
    int x;
    std::cin >> x;
    if(x == 1)
        std::cout << "-1";
    else
        std::cout << x << " " << x;
    return 0;
}
