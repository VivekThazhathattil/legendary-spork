#include <iostream>

int min(const int num1, const int num2){
    return num1 < num2 ? num1 : num2;
}

int main(void){
    int n, m, k;
    std::cin >> n >> m >> k;
    if(min(m, k) >= n)
        std::cout << "Yes";
    else
        std::cout << "No";
    return 0;
}
