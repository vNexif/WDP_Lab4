//
// Created by Nexif on 04/11/2020.
//
//Zadanie 4.1

#include <iostream>
#include <vector>
//CPP+11
#include <random>

class draft{
private:
    std::vector<int> draftv;
    int x_sum{};
    double x_product{1};

    void fillDraftTab(){
        std::random_device rd;
        std::mt19937_64 mt(rd());
        std::uniform_int_distribution<int> dist(0,200);

        for (int i = 0; i < 50; ++i) {
            draftv.push_back(dist(mt));
        }
    }

    void calcSum(int x){
        x_sum += x;
    }

    void calcProd(int x){
        x_product = (x_product * x);
    }

    void calcDraft(){
        int i = 0;
        while ( i < draftv.size() ){
            i++;
            if (draftv.at( i - 1 ) != 0){
                std::cout << " | " << draftv.at( i - 1 ) << std::endl;

                calcSum(draftv.at( i - 1 ));

                calcProd(draftv.at( i - 1 ));

            }else
            {
                break;
            }
        }
    }

    void showVal() const{
        std::cout << "Suma ciagu wynosi: " << x_sum << std::endl;
        std::cout << "Iloczyn ciagu wynosi: " << x_product << std::endl;
    }

public:
    draft(){
        fillDraftTab();
        calcDraft();
        showVal();
    }
};