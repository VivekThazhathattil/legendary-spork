#include <iostream>
#include <vector>
#include <algorithm>

int helper(void){
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for(int i = 0; i < n; ++i)
        std::cin >> a[i];
    std::sort(a.begin(), a.end());
    return a[n - 1];
}

int main(void){
    int res1 = helper();
    int res2 = helper();
    std::cout << res1 << " " << res2;
    return 0;
}
