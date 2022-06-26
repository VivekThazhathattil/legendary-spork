#include <iostream>
#include <vector>

int main(void){
    int t;
    std::cin >> t;
    while(t--){
        int n, input;
        std::vector<int> vec_start, vec_final;
        std::cin >> n;
        for(int i = 0; i < n; ++i){
            std::cin >> input;
            vec_start.push_back(input);
        }
        for(int i = 0; i < n; ++i){
            std::cin >> input;
            vec_final.push_back(input);
        }
        std::vector<int> vec_duration, queue;
        int queue_idx = 0;
        for(int i = 1; i < n; ++i){
            vec_duration.push_back(vec_final[i - 1] - vec_start[i - 1]);
            if(vec_start[i] < vec_final[i - 1])
                vec_start[i] = vec_final[i - 1];
        }
        vec_duration.push_back(vec_final[n - 1] - vec_start[n - 1]);
        for(int i = 0; i < n; ++i)
            std::cout << vec_duration[i] << " ";
        std::cout << std::endl;
    }
    return 0;
}
