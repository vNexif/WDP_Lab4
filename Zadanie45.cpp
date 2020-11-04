//
// Created by Nexif on 04/11/2020.
//
//Zadanie 4.5

#include <iostream>
#include <vector>
#include <random>

class evenNumbs{
private:
    std::vector<int> evenDraft;
    int evenCounter{};

    void genRndVal(){
        std::random_device rd;
        std::mt19937_64 mt(rd());
        std::uniform_int_distribution<int> dist(0,10);

        for (int i = 0; i < 30; ++i) {
            evenDraft.push_back(dist(mt));
        }
    }

    void checkStack(){
        int i = 0;
        while ( i < evenDraft.size() ){
            i++;
            if (evenDraft.at( i - 1 ) != 0){
                std::cout << " | " << evenDraft.at( i - 1 ) << std::endl;
                if ( evenDraft.at( i - 1 )%2 == 0){
                    evenCounter += 1;
                }
            }else
            {
                break;
            }
        }
    }

    void showEvenCounter() const{
        std::cout << evenCounter << std::endl;
    }

public:
    evenNumbs(){
        genRndVal();
        checkStack();
        showEvenCounter();
    }
};