#include "Zadanie41.cpp"
#include "Zadanie42.cpp"
#include "Zadanie43.cpp"
#include "Zadanie44.cpp"
#include "Zadanie45.cpp"
#include "Zadanie46.cpp"

void taskHandler(int sel){
    if ( sel == 1 ){
        //Zadanie 4.1 =>
        draft draft;
    }
    if ( sel == 2 ){
        //Zadanie 4.2 =>
        addSum100 sum100;
    }
    if ( sel == 3 ){
        //Zadanie 4.3 =>
        randMulti randMulti;
    }
    if ( sel == 4 ){
        //Zadanie 4.4 =>
        findMax findMax;
    }
    if ( sel == 5 ){
        //Zadanie 4.5 =>
        evenNumbs evenNumbs;
    }
    if ( sel == 6 ){
        //Zadanie 4.6 =>
        calc calc;
    }
}

void taskMenu(){
    int menusel = 0;
    static const char border[] = "*****************************************";
    printf("\n%s\n", border);
    printf("%s\n", "1. Zadanie 4.1");
    printf("%s\n", "2. Zadanie 4.2");
    printf("%s\n", "3. Zadanie 4.3");
    printf("%s\n", "4. Zadanie 4.4");
    printf("%s\n", "5. Zadanie 4.5");
    printf("%s\n", "6. Zadanie 4.6");
    printf("%s\n", border);

    std::cout << "Podaj opcje: ", std::cin >> menusel;

    taskHandler(menusel);
}

int main() {
    taskMenu();
    return 0;
}
