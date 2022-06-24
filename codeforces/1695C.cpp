#include <iostream>
#include <vector>

int max(const int num1, const int num2){
	return num1 > num2 ? num1 : num2;
}

int min(const int num1, const int num2){
	return num1 < num2 ? num1 : num2;
}

/* 
void printArray(std::vector<std::vector<int>>& arr){
	std::cout << "Printing array" << std::endl;
	for(int i = 0; i < arr.size(); ++i){
		for(int j = 0; j < arr[0].size(); ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
	return;
}
*/

void construct_dp(std::vector<std::vector<int>>& dp_min,
		std::vector<std::vector<int>>& dp_max,
	 	std::vector<std::vector<int>>& mat, int n, int m){

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(i - 1 < 0 && j - 1 < 0){
				dp_min[i][j] = mat[i][j];
				dp_max[i][j] = mat[i][j];
			}
			else if(i - 1 < 0 && j - 1 >= 0){
				dp_min[i][j] = mat[i][j] + dp_min[i][j - 1];
				dp_max[i][j] = mat[i][j] + dp_max[i][j - 1];
			}
			else if(i - 1 >= 0 && j - 1 < 0){
				dp_min[i][j] = mat[i][j] + dp_min[i - 1][j];
				dp_max[i][j] = mat[i][j] + dp_max[i - 1][j];
			}
			else{
				dp_min[i][j] = mat[i][j] + min(dp_min[i - 1][j], dp_min[i][j - 1]);
				dp_max[i][j] = mat[i][j] + max(dp_max[i - 1][j], dp_max[i][j - 1]);
			}
		}
	}
	// printArray(dp_min);
	// printArray(dp_min);
	return;
}

int main(void){
	int t;
	std::cin >> t;
	while(t--){
		int n, m, input;
		std::vector<std::vector<int>> mat, dp_min, dp_max;
		std::cin >> n >> m;
		for(int i = 0; i < n; ++i){
			std::vector<int> mat_row, dp_row;
			for(int i = 0; i < m; ++i){
				std::cin >> input;
				mat_row.push_back(input);
				dp_row.push_back(0);
			}
			mat.push_back(mat_row);
			dp_min.push_back(dp_row);
			dp_max.push_back(dp_row);
		}
		if((m + n) % 2 == 0)
			std::cout << "NO\n";
		else{
			construct_dp(dp_min, dp_max, mat, n, m);
			if(dp_min[n - 1][m - 1] <= 0 && dp_max[n - 1][m - 1] >= 0)
				std::cout << "YES\n";
			else
				std::cout << "NO\n";
		}
	}
	return 0;
}
