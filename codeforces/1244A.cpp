#include <iostream> 

int main(void){
    int t;
    std::cin >> t;
    while(t--){
        int num_lec, num_prac, num_lec_per_pen, num_prac_per_pencil, num_impl;
        std::cin >> num_lec >> num_prac >> num_lec_per_pen >> num_prac_per_pencil >> num_impl;
        int num_pens = num_lec / num_lec_per_pen;
        if((num_lec % num_lec_per_pen) != 0)
            ++num_pens;

        int num_pencils = num_prac / num_prac_per_pencil;
        if((num_prac % num_prac_per_pencil) != 0)
            ++num_pencils;

        if(num_pens + num_pencils > num_impl)
            std::cout << "-1" << std::endl;
        else
            std::cout << num_pens << " " << num_pencils << std::endl;
    }
    return 0;
}
