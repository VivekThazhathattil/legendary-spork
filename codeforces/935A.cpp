#include <iostream>

int main(void){
    int num_employees;
    std::cin >> num_employees;
    int num_ways = 0;
    for(int num_team_leaders = 1; num_team_leaders < num_employees; ++num_team_leaders)
        if((num_employees - num_team_leaders) % num_team_leaders == 0)
            ++num_ways;
    std::cout << num_ways;
    return 0;
}
