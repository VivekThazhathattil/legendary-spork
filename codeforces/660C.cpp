#include <iostream>
#include <vector>

void get_fa(std::vector<int>& v, int k){
	int sum = 0, l = 0, r = 0, k_used = 0, n = v.size();
	int target_r = 0, target_l = 0;
	while(l < n && r < n){
		if(v[r] == 1){
			++r;
		}
		else{
			if(k_used < k){
				++k_used;
				++r;:
			}
			else{
				if(r - l > sum){
					sum = r - l;
					target_r = r;
					target_l = l;
				}
				if(v[l] == 1)
					++l;
				else{
					--k_used;
					++l;
				}
			}
		}
	}
	if(r - l > sum){
		sum = r - l;
		target_r = r;
		target_l = l;
	}
	std::cout << sum << std::endl;
	//std::cout << "target_r = " << target_r << " and target_l = " << target_l << std::endl;
	for(int i = 0; i < n; ++i){
		if(target_l <= i && i < target_r)
			std::cout << "1 ";
		else
			std::cout << v[i] << " ";
	}
}

int main(void){
	int n, k, input;
	std::cin >> n >> k;
	std::vector<int> vec;
	for(int i = 0; i < n; ++i){
		std::cin >> input;
		vec.push_back(input);
	}
	get_fa(vec, k);
	return 0;
}
