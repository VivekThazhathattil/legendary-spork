#include <iostream>
#include <numeric>

int main(void){
	int t;
	std::cin >> t;
	while(t--){
		long long int n;
		std::cin >> n;
		long long int ans = n/2;
		if(n == 2)
			std::cout << "0\n";
		else if(n%2 == 0){
			if( (n - 2)%4 == 0)
				std::cout << std::lcm(ans - 2, ans + 2) - std::gcd(ans - 2, ans + 2) << "\n";
			else
				std::cout << std::lcm(ans - 1, ans + 1) - std::gcd(ans - 1, ans + 1) << "\n";
		}
		else
			std::cout << std::lcm(ans, ans + 1) - std::gcd(ans, ans + 1) << "\n";
	}
	return 0;
}
