#include <iostream>
#include <vector>

int main(void){
    int n, m;
    std::cin >> n >> m;
    std::vector<int> seq(n), fingerprints(m);
    for(int i = 0; i < n; ++i)
        std::cin >> seq[i];
    for(int i = 0; i < m; ++i)
        std::cin >> fingerprints[i];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
            if(seq[i] == fingerprints[j])
                std::cout << seq[i] << " ";
    }
    return 0;
}
