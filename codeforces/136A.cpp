#include <iostream>
#include <vector>

int main(void){
    int n, input;
    std::cin >> n;
    std::vector<int> out(n, 0);
    for(int i = 0; i < n; ++i){
        std::cin >> input;
        out[input - 1] = i + 1;
    }
    for(const auto elm : out)
        std::cout << elm << " ";
    return 0;
}
