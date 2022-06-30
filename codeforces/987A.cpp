#include <iostream>
#include <string>
#include <vector>

void search_n_mark(std::vector<int>& flag, const std::pair<std::string, std::string>* stones, const std::string test){
    for(int i = 0; i < 6; ++i)
        if(!test.compare(stones[i].second))
            flag[i] = 1;
    return;
}

int main(void){
    std::pair<std::string, std::string> *stones =
        new std::pair<std::string, std::string>[6];
    stones[0] = std::make_pair("Power", "purple");
    stones[1] = std::make_pair("Time", "green");
    stones[2] = std::make_pair("Space", "blue");
    stones[3] = std::make_pair("Soul", "orange");
    stones[4] = std::make_pair("Reality", "red");
    stones[5] = std::make_pair("Mind", "yellow");
    std::vector<int> flag_arr(6, 0);
    int n;
    std::string str;
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        std::cin >> str; 
        search_n_mark(flag_arr, stones, str);
    }
    std::cout << 6 - n << std::endl;
    for(int i = 0; i < 6; ++i)
        if(!flag_arr[i])
            std::cout << stones[i].first << std::endl;
    return 0;
}
