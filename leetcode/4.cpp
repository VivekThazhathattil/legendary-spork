#include <iostream>
#include <vector>

class Solution{
    public:
        double findMedian(std::vector<int>& v1, std::vector<int>& v2) const;
};

double Solution::findMedian(std::vector<int>& v1, std::vector<int>& v2) const{
    double median;
    int median_idx = (v1.size() + v2.size())/2;
    int count = 0, curr = 0, prev = 0;
    //std::cout << "median_idx: " << median_idx << std::endl;
    for(int i = 0, j = 0; i < v1.size() && j < v2.size();){
        if()
        if(v1[i] < v2[j]){
            prev = curr;
            curr = v1[i];
            //std::cout << "prev: " << prev << " curr: " << curr << std::endl;
        }
        else{
            prev = curr;
            curr = v2[j];
            //std::cout << "prev: " << prev << " curr: " << curr << std::endl;
        }
        if(i + j == median_idx){
            if(v1.size() + v2.size() == 0)
                median = ((double)curr + (double)prev)/2;
            else
                median = (double)curr;
            break;
        }
        v1[i] < v2[j] ? ++i : ++j;
    }
    return median;
}

int main(void){
    int m, n; 
    std::cin >> m >> n;
    std::vector<int> vec1(m), vec2(n);
    for(int i = 0; i < m; ++i)
        std::cin >> vec1[i];
    for(int i = 0; i < n; ++i)
        std::cin >> vec2[i];
    Solution solution;
    std::cout << "Median: " << solution.findMedian(vec1, vec2) << std::endl;
    return 0;
}
