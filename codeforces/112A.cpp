#include <iostream>

int main(void){
    int n;
    std::cin >> n;
    int unit_digit = n % 10;
    if(unit_digit <= 5)
        n -= unit_digit;
    else
        n += (10 - unit_digit);
    std::cout << n;
    return 0;
}
