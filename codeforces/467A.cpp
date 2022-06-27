#include <iostream>

int main(void){
    int n, count = 0, p, q;
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        std::cin >> p >> q;
        if(q - p >= 2) ++count;
    }
    std::cout << count << std::endl;
    return 0;
}
