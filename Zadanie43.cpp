//
// Created by Nexif on 04/11/2020.
//
//Zadanie 4.3
#include <iostream>
#include <random>

class randMulti{
private:
    int a{},b{},c{};
    int user_input{};
    int good_anw_count{}, bad_anw_count{};
    char again{};

    void genRndVal(){
        std::random_device rd;
        std::mt19937_64 mt(rd());
        std::uniform_int_distribution<int> dist(0,10);
        a = dist(mt);
        b = dist(mt);
    }

    void calcRndMultiVal(){
        c = (a * b);
    }

    void showRndVal() const{
        std::cout << "Liczba a wynosi: " << a << std::endl;
        std::cout << "Liczba b wynosi: " << b << std::endl;
    }

    void fetchUserInput(){
        std::cout << "Podaj wynik mnozenia a i b: ", std::cin >> user_input;
    }

    void cmpVals(){
        if ( user_input == c ){
            std::cout << "Prawidlowa odpowiedz" << std::endl;
            good_anw_count += 1;
        }
        else{
            std::cout << "Zla odpowiedz" << std::endl;
            bad_anw_count +=1;
        }
    }

    void tryAgain(){

        std::cout << "Chcesz kontynuowac zabawe ? [t/n]", std::cin >> again;

        if ( again == 't' ){
            randHandler();
        }
        else{
            std::cout << "Liczba prawidlowych odpowiedzi wynosi: " << good_anw_count << std::endl;
            std::cout << "Liczba blednych odpowiedzi wynosi: " << bad_anw_count << std::endl;
            std::cout << "Do zobaczenia :)" << std::endl;
        }
    }

    void randHandler(){
            genRndVal();
            calcRndMultiVal();
            showRndVal();
            fetchUserInput();
            cmpVals();
            tryAgain();
    }

public:
    randMulti(){
        randHandler();
    }
};