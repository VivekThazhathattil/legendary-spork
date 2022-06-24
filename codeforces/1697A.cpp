#include <iostream>

int main(void){
	int t;
	std::cin >> t;
	while(t--){
		int n, m, dist, energy_restored = 0;
		std::cin >> n >> m;
		for(int i = 0; i < n; ++i){
			std::cin >> dist;
			if(dist > m)
				energy_restored += dist - m;
			m = (m - dist > 0) ? m - dist : 0;
		}
		std::cout << energy_restored << std::endl;
	}
	return 0;
}
