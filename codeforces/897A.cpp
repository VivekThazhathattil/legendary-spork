#include <iostream>
#include <string>

int main(void){
    int n, m;
    std::string str;

    std::cin >> n >> m;
    std::cin >> str;

    while(m--){
        int l, r;
        char c1, c2;
        std::cin >> l >> r >> c1 >> c2;
        for(int i = 0; i < n; ++i)
            if(l - 1 <= i && i <= r - 1)
                if(str[i] == c1)
                    str[i] = c2;
    }
    std::cout << str;
    return 0;
}
