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
    int i = 0, curr, count = 0;
    while(i < n){
        curr = vec[i];
        if(vec[i] == curr && curr != 0){
            ++count;
            while(vec[i] == curr)
                ++i;
        }
        else
            ++i;
    }
    std::cout << count; 
    return 0;
}
