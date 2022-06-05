#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
	public:
			std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
				std::vector<int> intersection;	
				std::unordered_map<int, int> map;
				for(int num : nums1)
					++map[num];
				for(int num : nums2)
					if(map[num] > 0){
						intersection.push_back(num);
						--map[num];
					}
				return intersection;
	    }
};

int main(void){
	int t;
	std::cin >> t;
	while(t--){
		int n, m, input;
		std::vector<int> vec1, vec2;
		std::cin >> n >> m;
		for(int i = 0; i < n; ++i){
			std::cin >> input;
			vec1.push_back(input);
		}
		for(int i = 0; i < m; ++i){
			std::cin >> input;
			vec2.push_back(input);
		}
		Solution solution;
		std::vector<int> ans = solution.intersect(vec1, vec2);
		for(int i = 0; i < ans.size(); ++i)
			std::cout << ans[i] << " ";
		printf("\n");
	}
	return 0;
}

