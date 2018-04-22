#include "zadacha_class.hpp"

#include <iostream>



class Bitset {
private:
    unsigned long long s0;
    unsigned long long s1;
public:
    Bitset() {
        s0 = 0;
        s1 = 1;
    }


    void operator++()   {
        unsigned long long x = s0 ^ (s0 << 23);

        unsigned long long y = s1;

        s0 = y;

        s1 = (x >> 17) ^ (y >> 26);

        std::cout<< s1 + y<<"\n";
    }


    void out() {        //операция вывода генератора в произвольном формате
       std::cout<< s0 << " " <<s1<<"\n";
    }


    void seed() {      //сброс состояния генератора в указанное
        s0 = 0;
        s1 = 1;
    }


    void discard(int a) {            // пропускаем a элементов
        for (int i = 0; i < a; i++) {
            std::cout<<i+1<<"\t";
            ++(*this);
        }
    }
};
