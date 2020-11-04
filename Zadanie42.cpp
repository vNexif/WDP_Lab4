//
// Created by Nexif on 04/11/2020.
//
//Zadanie 4.2

#include <iostream>

class addSum100{
private:
    static void sum(){
        int input = 0,
        sum = 0;
        while ( sum < 100){
            std::cout << "Podaj liczbe: ", std::cin >> input;
            sum = sum + input;
            std::cout << sum << std::endl;
        }
        std::cout << "Suma przekroczyla 100" << std::endl;
    }

public:
    addSum100(){
        sum();
    }
};