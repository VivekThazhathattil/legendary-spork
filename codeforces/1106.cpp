#include <iostream>
#include <vector>
#include <algorithm>

typedef long long int ll;

int main(void){
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for(int i = 0; i < n; ++i)
        std::cin >> vec[i];
    std::sort(vec.begin(), vec.end());
    ll sum = 0;
    for(int i = 0; i < n/2; ++i)
        sum += (ll)(vec[i] + vec[n - i - 1]) * (ll)(vec[i] + vec[n - i - 1]);
    std::cout << sum;
    return 0;
}
