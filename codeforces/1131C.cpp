#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(void){
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for(int i = 0; i < n; ++i)
        std::cin >> a[i];
    std::sort(a.begin(), a.end());
    std::string str = std::to_string(a[0]);
    for(int i = 1; i < n; ++i){
        if(i % 2)
            str = str + " " + std::to_string(a[i]);
        else
            str = std::to_string(a[i]) + " " + str;
    }
    std::cout << str;
    return 0;
}
