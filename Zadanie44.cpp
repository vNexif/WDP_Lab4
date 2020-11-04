//
// Created by Nexif on 04/11/2020.
//
//Zadanie 4.4

#include <iostream>
#include <vector>
#include <algorithm>
class findMax{
private:
    int userNum{};
    std::vector<int> userInput;

    void fetchUserInput(){
        do {
            std::cout << "Podaj liczbe: ";
            std::cin >> userNum;
            if (userNum != 0 ) {
                userInput.push_back(userNum);
            }
        }while (userNum != 0);
    }
    
    void checkStack(){
        for (int i : userInput) {
            std::cout << i << std::endl;
        }
    }

    void vectorMax(){
        std::cout << "Najwieksza wartosc wynosi: " << *(std::max_element(userInput.begin(), userInput.end()));
    }



public:
    findMax(){
        fetchUserInput();
        checkStack();
        vectorMax();
    }
};