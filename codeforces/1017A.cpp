#include <iostream>
#include <vector>

int main(void){
    int n, input;
    std::cin >> n;
    std::vector<std::vector<int>> table(n);
    int pos = 1;
    for(int i = 0; i < n; ++i){
        int sum = 0;
        for(int j = 0; j < 4; ++j){
            std::cin >> input; 
            table[i].push_back(input);
            sum += input;
        }
        table[i].push_back(sum);
        if(table[i][4] > table[0][4])
            ++pos;
    }
    std::cout << pos;
    return 0;
}
