#include <iostream>
#include <string>

int main(){
    char my_char='A';
    std::string my_str="ACHUTAMKESHAVAM";
    std::cout << "size of my_char:" << sizeof(my_char) << std::endl;
    std::cout << "size of my_str:" << sizeof(my_str) << std::endl;
    std::cout << "first character:" << my_str.front() << std::endl;
    std::cout << "pointer to first char:" << my_str.data() << std::endl;
    return 0;
}
