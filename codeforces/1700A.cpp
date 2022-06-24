#include <iostream>

typedef long long int ll;

int main(void){
	int t;
	std::cin >> t;
	while(t--){
		ll n, m;
		std::cin >> n >> m;
		std::cout << m*(m + 1)/2 + m*n*(n + 1)/2 - m << std::endl;
	}
	return 0;
}
