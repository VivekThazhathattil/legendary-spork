#include <iostream>
#include <string>

int max(int num1, int num2){
	return num1 > num2 ? num1 : num2;
}

int get_beauty(char curr_char, std::string& str, int n, int k){
	int l = 0, r = 0, k_used = 0, ans = 0;
	while(l < n && r < n){
		if(str[r] == curr_char) 
			++r;
		else{
			if(k_used < k){
				++k_used;
				++r;
			}
			else{
				ans = max(ans, r - l);
				if(str[l] == curr_char){
					++l;
				}
				else{
					++l;
					--k_used;
				}
			}
		}
	}
	ans = max(ans, r - l);
	return ans;
}

int main(void){
	int n, k, l = 0, r, answer = 0;
	char curr_char;
	std::string str;
	std::cin >> n >> k;
	std::cin >> str;
	answer = max(get_beauty('a', str, n, k), get_beauty('b', str, n, k));
	std::cout << answer;
}
