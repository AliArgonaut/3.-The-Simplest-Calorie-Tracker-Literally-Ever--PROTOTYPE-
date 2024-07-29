#include <iostream>

int main(){
    int currentCalorie = 0;
    int newCalorie;

    while (newCalorie != 0){
        std::cout << "enter new calories or enter 0 to quit: "; 
        std::cin >> newCalorie;
        currentCalorie += newCalorie;
        std::cout << "total calories consumed: " << currentCalorie << std::endl;
    }
}

//TO DO 

//1. calculate calories left to go before a max