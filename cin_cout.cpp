#include <iostream>

int main (){
    int num;
    int addition=0;
    for (int i=0; i<5; i++) {
        std::cout << "enter number to add" << std::endl;
        std::cin >> num;
        // how to handle incorrect output? 
        if(std::cin.fail()){
            break;    
        }
    }
    std::cout << "addition is :" << addition << std::endl;

    return 0;
}

