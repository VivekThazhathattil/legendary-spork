#include <iostream>
#include <algorithm>
#include <vector>

int main(void){
    int k;
    std::cin >> k;
    while(k--){
        int n;
        std::cin >> n;
        std::vector<int> vec(n);
        for(int i = 0; i < n; ++i)
            std::cin >> vec[i];
        std::sort(vec.begin(), vec.end());
        int side_length = 0;
        for(int i = n - 1; i >= 0; --i){
            if(vec[i] < n - i)
                break;
            else
                ++side_length;
        }
        std::cout << side_length << std::endl;
    }
    return 0;
}
