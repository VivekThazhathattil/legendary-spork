#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<std::vector<int>> Matrix;

class Solution{

    public:
        void rotateMatrix(Matrix& matrix){
            std::reverse(matrix.begin(), matrix.end());
            for(int i = 0; i < matrix.size(); ++i)
                for(int j = i + 1; j < matrix.size(); ++j)
                   std::swap(matrix[i][j], matrix[j][i]);
        }
};

void printMatrix(Matrix& matrix){
    for(int i = 0; i < matrix.size(); ++i){
        for(int j = 0; j < matrix[i].size(); ++j)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
}

int main(void){
    int testN = 4;
    Matrix  testMatrix(testN, std::vector<int>(testN));
    for(int i = 0; i < testN; ++i)
        for(int j = 0; j < testN; ++j)
           testMatrix[i][j] = testN*i + j + 1;

    printMatrix(testMatrix);
    Solution solution;
    solution.rotateMatrix(testMatrix);
    std::cout << "\n\n";
    printMatrix(testMatrix);
    return 0;
}
