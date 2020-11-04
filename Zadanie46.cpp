//
// Created by Nexif on 04/11/2020.
//
//Zadanie 4.6
//

#include <iostream>

class calc{
private:
    int menuswitch{};
    int a{},b{};
    int koniec{};

    static void printMenu(){
        static const char border[] = "*****************************************";
        printf("\n%s\n", border);
        printf("%s\n", "0. Koniec");
        printf("%s\n", "1. Dodawanie");
        printf("%s\n", "2. Odejmowanie");
        printf("%s\n", "3. Mnozenie");
        printf("%s\n", "4. Odejmowanie");
        printf("%s\n", border);
    }

    void getMenuSwitch(){
        std::cout << "Wybierz opcje: ";
        std::cin >> menuswitch;
    }

    void getValues(){
        std::cout << "Podaj a: ", std::cin >> a, std::cout << std::endl;
        std::cout << "Podaj b: ", std::cin >> b, std::cout << std::endl;
    }

    void addiction(){
        getValues();
        std::cout << "Wynik dodawania to: " << (a + b) << std::endl;
    }

    void subtraction(){
        getValues();
        std::cout << "Wynik odejmowania to: " << (a - b) << std::endl;
    }

    void multiplication(){
        getValues();
        std::cout << "Wynik mnozenia to: " << (a*b) << std::endl;
    }

    void division(){
        getValues();
        if (b != 0) {
            div_t divres;
            divres = div(a,b);
            std::cout << "Wynik dzielenia to: " << divres.quot << std::endl;
            std::cout << "Reszta z dzielenia to: " << divres.rem << std::endl;
        }
        else{
            std::cout << "Dzielenie przez zero :)" << std::endl;
        }
    }

    void menuLogic(){
        switch (menuswitch) {
            case 0:{
                std::cout << "Koniec :)" << std::endl;
                koniec = 1;
                break;
            }
            case 1:{
                addiction();
                break;
            }
            case 2:{
                subtraction();
                break;
            }
            case 3:{
                multiplication();
                break;
            }
            case 4:{
                division();
                break;
            }
            default:{
                std::cout << "Takiej opcji nie ma" << std::endl;
                break;
            }

        }
    }

public:
    calc(){
        do {
            printMenu();
            getMenuSwitch();
            menuLogic();
        }while (koniec == 0);
    };
};