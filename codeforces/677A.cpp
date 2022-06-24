#include <iostream>

int main(void){
	int n, h, input, count = 0;
	std::cin >> n >> h;
	for(int i = 0; i < n; ++i){
		std::cin >> input;
		if(input > h)
		 	++count;
	}
	std::cout << count + n << std::endl;
	return 0;
}

