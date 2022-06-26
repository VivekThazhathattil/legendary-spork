#include <iostream>
#include <numeric>
#include <cmath>

typedef long long int ll;

int is_square(ll num){
    ll root = sqrt(num);
    return root * root == num;
}

ll count_numbers(ll residue, ll dope_shitz, ll n){
    ll count = 0;
    for(ll i = 0; i + residue <= sqrt(n); ++i){
        ll temp = std::lcm(i, residue + i) + std::gcd(i, residue + i);
        if(temp*temp == dope_shitz){
            if(residue == 0)
                ++count;
            else
                count += 2;
        }
        if(temp > dope_shitz)
            break;
    }
    return count;
}

int main(void){
    int t;
    std::cin >> t;
    ll n = 0;
    while(t--){
       ll n, count = 0; 
       std::cin >> n;
       if(n % 2 != 0)
           count = 0;
       else if(is_square(n) && n % 2 == 0){
           if(n % 100 == 0)
               count = 3;
           else
               count = 1;
       }
       else{
       for(ll i = 0; i*i < n; ++i)
           if(is_square(n - i*i)){
                count += count_numbers(i, n - i*i, n);
           }
       }
       std::cout << count << std::endl;
    }
    return 0;
}

// 22 :std::cout << "(" << i << "," << i + residue << ")" << std::endl;
// 48: std::cout << "(" << i*i << "," << (n - i*i) << ")" << std::endl;
// 50: std::cout << n << ":" << count << std::endl;
