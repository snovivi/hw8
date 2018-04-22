#include <iostream>
#include <iomanip>
#include "zadacha_class.hpp"
int main() {
    Bitset x;
    ++x;
    ++x;
    ++x;
    ++x;
    x.seed();
    std::cout << " Совершен сброс >>" << "\n";
    x.out();
    std::cout<< "Пропускаем указаноое число выходных данных" << "\n";
    x.discard(10);




;}
