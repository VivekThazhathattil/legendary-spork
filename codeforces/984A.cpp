#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for(int i = 0; i < n; ++i)
        std::cin >> vec[i];
    std::sort(vec.begin(), vec.end());
    std::cout << ((n & 1) ? vec[n/2] : vec[n/2 - 1]);
    return 0;
} 
