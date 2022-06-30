#include <iostream>
#include <vector>

int main(void){
    int n, l, r, k;
    std::cin >> n;
    std::vector<int> first_pages(n);
    std::vector<int> last_pages(n);
    for(int i = 0; i < n; ++i){
        std::cin >> first_pages[i];
        std::cin >> last_pages[i];
    }
    std::cin >> k;
    for(int i = 0; i < n; ++i){
        if(first_pages[i] <= k && k <= last_pages[i]){
            std::cout << n - i;
            break;
        }
    }
    return 0;
}
