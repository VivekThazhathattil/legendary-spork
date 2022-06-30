#include <iostream>

#define NUM_RED_SHEETS 2
#define NUM_GREEN_SHEETS 5
#define NUM_BLUE_SHEETS 8

int main(void){
    long long int n, k, count;
    std::cin >> n >> k;
    count = (n*NUM_RED_SHEETS)/k + ((n*NUM_RED_SHEETS) % k > 0 ? 1 : 0)
        + (n*NUM_GREEN_SHEETS)/k + ((n*NUM_GREEN_SHEETS) % k > 0 ? 1 : 0)
        + (n*NUM_BLUE_SHEETS)/k + ((n*NUM_BLUE_SHEETS) % k > 0 ? 1 : 0);
    std::cout << count;
    return 0;
}
