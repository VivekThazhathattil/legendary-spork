#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    int n, k, sum = 0, discount = 0;
    std::cin >> n >> k;
    std::vector<int> a(n), b(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        std::cin >> b[i];
        sum += b[i];
        b[i] -= a[i];
    }
    std::sort(b.begin(), b.end());
    for(int i = 0; i < n; ++i){
        if(i >= k && b[n - 1 - i] < 0)
            break;
        discount += b[n - 1 - i];
    }
    std::cout << sum - discount;
    return 0;
}
